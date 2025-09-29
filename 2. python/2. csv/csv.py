def main():
    students = []
    with open('nameHouse.csv', 'r') as file:
        for line in file:
            line = line.strip().split(',')
            student = {"name": line[0], "house": line[1]}
            students.append(student)


    for student in sorted(students, key = lambda student : student["name"], reverse= True):
        print(f"{student['name']} is in {student['house']}")


if __name__ == "__main__":
    main()