def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    #print tip amount and round it to two digits
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    #replace the $ with nothing and converting str in float
    d = float(d.replace("$", ""))
    return d


def percent_to_float(p):
    #replace % with nothing and converts
    p = float(p.replace("%", "")) / 100.0
    return p


main()
