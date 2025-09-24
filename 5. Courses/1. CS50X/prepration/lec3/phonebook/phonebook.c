#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string number;
    string name;
}person;

int main(void)
{
    //phonebook algorithum
    person people[3];
    people[0].number = "0319-42660";
    people[0].name = "Abdullah";

    people[1].number = "0332-8498523";
    people[1].name = "Asmat";

    people[2].number = "Bilal";
    people[2].name = "0334-4445557";

    string names = get_string("Enter You Name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, names) == 0)
        {
            printf("The Number is: %s\n", people[i].number);
            return 0;
        }
    }
    printf("The Number is Not Found!\n");
    return 1;
}
