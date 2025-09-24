def main():
    expression = input("Give Your Expression: ")
    first, symbol, second = expression.split(" ")
    first, second = float(first), float(second)
    if symbol == "+":
        print(first + second)
    elif symbol == "-":
        print(first - second)
    elif symbol == "*":
        print(first * second)
    else:
        print(first / second)
main()
