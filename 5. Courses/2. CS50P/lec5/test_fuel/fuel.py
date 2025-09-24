def main():
    fraction = input("Fraction: ")
    try:
        percent = convert(fraction)
        print(gauge(percent))
    except (ValueError, ZeroDivisionError):
        print("Invalid fraction")


def convert(fraction):
    try:
        x, y = fraction.split("/")
        x = int(x)
        y = int(y)
    except (ValueError, AttributeError):
        raise ValueError

    if y == 0:
        raise ZeroDivisionError
    if x > y or x < 0 or y < 0:
        raise ValueError

    return round((x / y) * 100)


def gauge(percentage):
    if percentage <= 1:
        return "E"
    elif percentage >= 99:
        return "F"
    else:
        return f"{percentage}%"


if __name__ == "__main__":
    main()
