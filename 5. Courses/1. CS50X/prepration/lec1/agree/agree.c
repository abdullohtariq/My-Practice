#include<cs50.h>
#include<stdio.h>
int main(void)
{
    char c = get_char("Do You Agree? ");

    if(c=='y' || c=='Y')
    {
        printf("User Has Agreed\n");
    }
    else if(c=='n' || c=='N')
    {
        printf("User Hasn't Agreed\n");
    }
    else
    {
        printf("Invalid Input.");
    }
}
