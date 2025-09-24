from cs50 import get_float
# number of coins that will be required
coins = 0
# Handles Negitive Values
cash = 0.00
while cash <= 0:
    cash = int(get_float("Your Amount: ") * 100)
while cash >= 25:
    cash = cash - 25
    coins += 1
while cash >= 10:
    cash = cash - 10
    coins += 1
while cash >= 5:
    cash = cash - 5
    coins += 1
while cash >= 1:
    cash = cash - 1
    coins += 1
print(coins)
