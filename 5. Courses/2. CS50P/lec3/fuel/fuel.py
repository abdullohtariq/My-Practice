def main():
    fuel = converter()
    if fuel == 0 or fuel == 1:
        print("E")
    elif fuel == 99 or fuel == 100:
        print("F")
    else:
        print(f"{fuel}%")


def converter():
    while True:
        s = input("Fraction: ")
        try:
            x, y = s.split("/")
            x, y = int(x), int(y)
        except ValueError:
            continue

        if y == 0 or x < 0 or y < 0 or x > y:
            continue

        return round((x * 100)/ y)


main()
