def main():
    text = input("Enter Your Text: ")
    text = shortner(text)
    print(text)


def shortner(text):
    newText = ""
    for s in text:
        if s in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']:
            pass
        else:
            newText += s
    return newText

main()
