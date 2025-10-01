import re
import sys
def main():
    name = input("Enter your name: ")
    last, first = "", ""
    if re.match(r"^[a-zA-Z_]+, ?[a-zA-Z_]+$", name):
        last, first = re.split(r", ?", name)
    
    elif re.fullmatch(r"[a-zA-Z_]+ [a-zA-Z_]+", name):
        first, last = name.split(" ")
        
    else:
        sys.exit("Invalid name format")
        
    with open("greeting.txt", "a") as file:
        file.write(f"{first} {last}\n")

        


if __name__ == "__main__":
    main()