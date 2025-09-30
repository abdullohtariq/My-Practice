import re
def main():
    email = input("Enter your email: ")
    if re.search(r"^[a-zA-Z0-1_]+@[a-zA-Z0-1_]+\.edu$", email, re.IGNORECASE):
        print("Valid email")
    else:
        print("Invalid email")

if __name__ == "__main__":
    main()