import os
import subprocess
import tkinter as tk
from tkinter import messagebox


def compute_stats(game_path):
    wins = 0
    losses = 0
    if not os.path.exists(game_path):
        return 0, 0

    with open(game_path, "r", encoding="utf-8") as f:
        for line in f:
            token = line.strip().lower()
            if not token:
                continue
            if token in {"win", "won", "w"}:
                wins += 1
            elif token in {"lose", "lost", "l", "loss"}:
                losses += 1
            else:
                if token.startswith("w"):
                    wins += 1
                elif token.startswith("l"):
                    losses += 1

    return wins, losses


class GameFrontend(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Play Number Guessing Game")
        self.geometry("380x160")

        self.label = tk.Label(self, text="Press Play to start the game in a new terminal.")
        self.label.pack(pady=10)

        self.play_btn = tk.Button(self, text="Play Game", command=self.play_game)
        self.play_btn.pack(pady=5)

        self.stats_btn = tk.Button(self, text="Show Win/Loss Stats", command=self.show_stats)
        self.stats_btn.pack(pady=5)

        self.stats_label = tk.Label(self, text="Win Rate: N/A")
        self.stats_label.pack(pady=10)

        # locate files
        self.base_dir = os.path.normpath(os.path.join(os.path.dirname(__file__)))
        # assume gamestate.py and game.txt are in the same folder or repo root
        self.game_script = os.path.join(self.base_dir, "gamestate.py")
        self.game_txt = os.path.normpath(os.path.join(os.getcwd(), "game.txt"))

        # if game.txt not in cwd, also check script parent folders
        if not os.path.exists(self.game_txt):
            self.game_txt = os.path.normpath(os.path.join(self.base_dir, "..", "..", "game.txt"))

    def play_game(self):
        if not os.path.exists(self.game_script):
            messagebox.showerror("Error", f"Could not find gamestate.py at {self.game_script}")
            return

        # Launch the game in a new terminal window and wait for it to finish.
        # Using cmd start with /wait so this process blocks until the user closes the game window.
        try:
            # Build command: cmd /c start "" /wait python "path\to\gamestate.py"
            cmd = [
                "cmd",
                "/c",
                "start",
                "",
                "/wait",
                "python",
                self.game_script,
            ]
            subprocess.run(cmd, check=True)
        except subprocess.CalledProcessError as e:
            messagebox.showerror("Error", f"Failed to launch game: {e}")
            return

        # After the game window closes, update stats
        self.show_stats()

    def show_stats(self):
        wins, losses = compute_stats(self.game_txt)
        total = wins + losses
        if total == 0:
            text = "No game records found." 
            rate_text = "Win Rate: N/A"
        else:
            rate = wins / total * 100
            text = f"Total games: {total} — Won: {wins}, Lost: {losses}"
            rate_text = f"Win Rate: {rate:.2f}%"

        self.stats_label.config(text=rate_text)
        messagebox.showinfo("Win/Loss Stats", text + "\n" + rate_text)


if __name__ == "__main__":
    app = GameFrontend()
    app.mainloop()
