from cs50 import get_int
Height = 0
while Height < 1 or Height > 8:
    Height = get_int("Height: ")

for i in range(Height):
    for j in range(Height - i - 1):
        print(" ", end="")
    for k in range(i + 1):
        print("#", end="")
    print("  ", end="")
    for n in range(i + 1):
        print("#", end="")
    print()
