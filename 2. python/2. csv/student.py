import csv

def main():
    students = []
    with open('nameHouse.csv') as file:
        reader = csv.DictReader(file)
        for row in reader:
            student = {"name": row["Name"], "house": row["House"]}
            students.append(student)


    for student in sorted(students, key = lambda student : student["name"], reverse= True):
        print(f"{student['name']} is in {student['house']}")


if __name__ == "__main__":
    main()