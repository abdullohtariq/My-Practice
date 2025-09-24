def is_valid(s):
    # length check
    if len(s) < 2 or len(s) > 6:
        return False

    # first two must be letters
    if not (s[0].isalpha() and s[1].isalpha()):
        return False

    seen_digit = False
    for w in s:
        if w.isalpha():
            if seen_digit:
                return False
        elif w.isdigit():
            if not seen_digit:  # first digit
                if w == "0":    # first digit can't be 0
                    return False
                seen_digit = True
        else:
            return False
    return True

def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

if __name__ == "__main__":
    main()
