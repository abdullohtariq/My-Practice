import sys
from pyfiglet import Figlet

def main():
    object = Figlet()


    if len(sys.argv) == 1:
        text = input("Input: ")
        print(object.renderText(text))

    elif len(sys.argv) == 3 and sys.argv[1] in ["-f","--font"]:
        try:
            object.setFont(font = sys.argv[2])
        except:
            sys.exit(1)
        text = input("Input: ")
        print(object.renderText(text))

    else:
        sys.exit(1)


if __name__ == "__main__":
    main()
