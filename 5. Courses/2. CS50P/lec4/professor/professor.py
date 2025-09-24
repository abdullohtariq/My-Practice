import random


def main():
    level = get_level()
    score = 0

    #main 10 question Loop
    for _ in range(10):
        x = generate_integer(level)
        y = generate_integer(level)


        #Checking if the answerr is wrong or right
        tries = 0
        while tries < 3:
            try:
                answer = int(input(f"{x} + {y} = "))
            except ValueError:
                tries += 1
                print("EEE")
                continue

            if answer == x + y:
                score += 1
                break
            else:
                print("EEE")
                tries += 1
        else:
            print(f"{x} + {y} = {x + y}")


    print(f"Score: {score}")


def get_level():
    while True:
        try:
            level = int(input("Level: "))
        except ValueError:
            continue
        if level in [1, 2, 3]:
            return level


def generate_integer(level):
    if level == 1:
        start = 0
        end = 9
    else:
        start = 10** (level - 1)
        end = (10**level) - 1
    return random.randint(start, end)


if __name__ == "__main__":
    main()
