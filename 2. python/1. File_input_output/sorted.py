def main():
    names = []
    with open("names.txt") as file:
        for line in file:
            names.append(line.rstrip())

    for name in sorted(names, reverse=True):
        print("hello, " + name)        

if __name__ == "__main__":
    main()