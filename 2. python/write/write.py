import csv
def main():
    name = input("Enter your name: ")
    age = input("Enter your age: ")
    home = input("Enter your home: ")
    with open("data.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow([name, age, home])
        
if __name__ == "__main__":
    main()