def main():
    with open('nameHouse.csv', 'r') as file:
        for line in file:
            line = line.rsplit().split(',')
            print("Hello, " + line[0]+ " WHo Lives in " + line[1] + "!")


if __name__ == "__main__":
    main()