def main():
    students = []
    with open('nameHouse.csv', 'r') as file:
        for line in file:
            line = line.strip().split(',')
            student = {}
            student['name'] = line[0]
            student['house'] = line[1]
            students.append(student)
    for student in students:
        print(f"{student['name']} is in {student['house']}")


if __name__ == "__main__":
    main()