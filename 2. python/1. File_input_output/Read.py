def main():
    with open("names.txt", "r") as file:
        lines = file.readlines()

        for line in lines:
            print("hello, " + line, end = "")

    read_file()

def read_file():
    with open("names.txt", "r") as file:
        for line in file:
            print("hello from god  to "  + line.rstrip())

if __name__ == "__main__":
    main()