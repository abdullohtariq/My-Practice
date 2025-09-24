def value(greetings):
    greetings = greetings.strip().lower()
    if greetings.startswith("hello"):
        return 0
    elif greetings.startswith("h"):
        return 20
    else:
        return 100


def main():
    greetings = input("Your Greetings: ")
    print(f"${value(greetings)}")

if __name__ == "__main__":
    main()
