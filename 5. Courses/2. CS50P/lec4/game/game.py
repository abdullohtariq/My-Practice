from random import randint

def main():
    #Random Number From Zero To Level
    level = get_int("Level: ")
    number = randint(1, level)

    #main loop till you find Number
    while True:
        guess = get_int("Guess: ")
        if guess < number:
            print("Too small!")
        elif guess > number:
            print("Too large!")
        else:
            print("Just right!")
            break


def get_int(text):
    #get int and remove extra errors
    while True:
        try:
            x =  int(input(text))
        except ValueError:
            continue
        if x > 0:
            return x


if __name__ == "__main__":
    main()
