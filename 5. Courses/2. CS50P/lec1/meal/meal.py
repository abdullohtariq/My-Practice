def main():
    time = input("What is time right now: ").strip()
    hours = convert(time)


    if 7 <= hours <= 8:
        print("breakfast time")
    elif 12 <= hours <= 13:
        print("lunch time")
    elif 18 <= hours <= 19:
        print("dinner time")


def convert(time):
    hours, mints = time.split(":")
    return int(hours) + int(mints) / 60.0


if __name__ == "__main__":
    main()
