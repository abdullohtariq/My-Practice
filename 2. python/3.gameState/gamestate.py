from random import randint
def main():
    number = randint(1, 100)
    attempts = 0
    print("Welcome to the Number Guessing Game!")
    print("I have selected a number between 1 and 100.")
    print("Try to guess it!")


    while True:
        guess = get_int()
        attempts += 1

        if guess < number and attempts < 6:
            print("Too low! Try again.")
        elif guess > number and attempts < 6:
            print("Too high! Try again.")
        elif guess == number:
            print(f"Congratulations! You've guessed the number {number} in {attempts} attempts.")
            with open("game.txt", "a") as file:
                file.write("won\n")
            break
        else:
            print(f"Sorry, you've used all your attempts. The number was {number}.")
            with open("game.txt", "a") as file:
                file.write("won\n")
            break

def get_int():
    while True:
        try:
            return int(input("Enter an integer: "))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

if __name__ == "__main__":
    main()