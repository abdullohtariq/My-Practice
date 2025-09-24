#Validing Input Problem
def main():
    amount = 0
    while amount < 50:
        print("Amount Due:", 50 - amount)
        paid = int(input("Insert Coin: "))
        if paid in [5, 10, 25]:
            amount += paid
    print("Change Owed:", amount - 50)

main()
