import csv
def main():
    name = input("Enter your name: ")
    age = input("Enter your age: ")
    home = input("Enter your home: ")
    with open("data.csv", "a") as file:
        writer = csv.DictWriterwriter(file, fieldnames=["name", "age", "address"])
        writer.writerow({"name": name, "age": age, "address": home})
        
if __name__ == "__main__":
    main()