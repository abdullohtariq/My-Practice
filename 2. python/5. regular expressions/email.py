import re
def main():
    email = input("Enter your email: ")
    if re.search(r"^([\w\.]+)@(\w+)(\.\w+)?\.edu$", email, re.IGNORECASE):
        print("Valid email")
    else:
        print("Invalid email")

if __name__ == "__main__":
    main()