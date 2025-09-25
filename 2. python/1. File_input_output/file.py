def main():
    names = []
    while True:
        try:
            names.append(input("Enter a name: "))
        except EOFError:
            break

    for name in names:
        with open("names.txt", "a") as file:
            file.write(name + "\n")

    

if __name__ == "__main__":
    main()