def main():
    text = input("Enter Your Text: ")
    print(shorten(text))


def shorten(word):
    new_text = ""
    for s in word:
        if s in ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]:
            pass
        else:
            new_text += s
    return new_text



if __name__ == "__main__":
    main()
