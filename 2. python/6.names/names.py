import re
import sys
def main():
    name = input("Enter your name: ")
    matches = re.search(r"^([\w .'-]+), *([\w .'-]+)$", name)
    if matches:
        last = matches.group(1)
        first = matches.group(2)
        name = f"{first} {last}"
        
    with open("greeting.txt", "a") as file:
        file.write(f"{name}\n")

        

if __name__ == "__main__":
    main()