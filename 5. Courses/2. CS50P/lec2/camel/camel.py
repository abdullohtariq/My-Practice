def main():
    Variable = input("Give Your Camel Case: ")
    Variable = Convert_Snake(Variable)
    print(Variable)

#to covert the CamelCase into SnakeCase
def Convert_Snake(Variable):
    new = ""
    for s in Variable:
        #If uppercase character throw a underscroce
        if  s.isupper():
            new += "_"
            new += s.lower()
        else:
            new += s
    return new


main()
