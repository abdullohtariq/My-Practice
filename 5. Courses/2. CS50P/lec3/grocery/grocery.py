def main():
    items = {}
    while True:
        try:
            item = input().upper()
        except EOFError:
            print()
            break

        if item in items:
            items[item] += 1
        else:
            items[item] = 1

    sorted_dict = dict(sorted(items.items()))
    for item, Amount , in sorted_dict.items():
        print(Amount, item)
main()

