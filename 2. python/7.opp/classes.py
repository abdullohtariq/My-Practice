class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

def main():
    student = get_student()
    print(f"Name: {student.name}")
    print(f"Age: {student.age}")


def get_student():
    #makintg object of class
    name = input("Enter name: ")
    age = int(input("Enter age: "))
    student = Student(name, age)
    return student

if __name__ == "__main__":
    main()