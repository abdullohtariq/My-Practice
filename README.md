## My Practice

This repository is a single place to collect code written while learning languages, paradigms, and small-project experiments. The goal is to keep practice code and small projects together instead of creating a separate repository for every tiny experiment.

Contents at a glance
- `1. C and Cpp/` — C and C++ exercises, grouped by topic (fundamentals, loops, functions, arrays, pointers, recursion), small console projects, and a few GUI/Visual Studio projects.
- `2. python/` — Python practice scripts and small utilities. Subfolders include:
  - `File_input_output/` — basic file-reading/writing examples.
  - `csv/` — CSV examples and small scripts.
  - `3.gameState/` — a simple number-guessing game (`gamestate.py`), a stats reader (`check_win_rate`), and a GUI frontend (`gui_frontend.py`). Game runs append results to `game.txt`.
  - `write/`, `regular expressions/`, `names/` — short exercises and small utilities.
- `5. Courses/` — course materials and exercises (CS50, CS50P). Useful reference and solved exercises from courses.

Repository purpose
- Keep learning experiments in one place so you can browse how a concept was implemented in different languages.
- Store small projects (games, utilities, demos) without creating a separate GitHub repo for each.

Quick examples

Run a Python script (from repo root):
```powershell
python "2. python\3.gameState\gamestate.py"
```

Open the GUI frontend (it will launch the interactive game in a new terminal and show stats after each round):
```powershell
python "2. python\3.gameState\gui_frontend.py"
```

Count wins and losses (the `check_win_rate` script reads `game.txt`):
```powershell
python "2. python\3.gameState\check_win_rate"
```

Compile/Run C/C++ (Windows PowerShell examples)
```powershell
# Using MinGW GCC/g++
cd "1. C and Cpp\1. Programming Fundamentals\3. Loops And For Loops\1. For Loops"
g++ -std=c++17 "1. For Loops.cpp" -o ForLoops.exe
.\ForLoops.exe

# Using MSVC from Developer Command Prompt
cl /EHsc "YourProgram.cpp"
```

Notes and conventions
- Many folder names are numbered to help keep exercises ordered; filenames mirror the exercise's topic.
- Scripts that produce or append to `game.txt` (for example `gamestate.py`) will change that file. The GUI frontend and `check_win_rate` read this file to show stats.
- Use quotes when changing into directories with spaces (PowerShell/Command Prompt).

Suggestions / next steps
- If you want, I can:
  - Add a small CONTRIBUTING.md with repo conventions.
  - Standardize Python scripts to use `.py` extension consistently and add a tiny CLI (argparse) to `check_win_rate`.
  - Add a simple index (top-level markdown) listing runnable examples and where to find them.

License
- This is a personal practice repository

---


