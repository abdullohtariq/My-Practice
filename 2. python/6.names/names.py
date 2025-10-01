import re
import sys
def main():
    name = input("Enter your name: ")
    last, first = "", ""
    if re.match(r"^\w+, ?\w+$", name):
        last, first = re.split(r", ?", name)
    
    elif re.match(r"^\w+ \w+$", name):
        first, last = name.split(" ")
        
    else:
        sys.exit("Invalid name format")
        
    with open("greeting.txt", "a") as file:
        file.write(f"{first} {last}\n")

        


if __name__ == "__main__":
    main()