#include<cs50.h>
#include<stdio.h>
int add(int a,int b);

int main(void)
{
    int x = get_int("What Is X? ");
    int y = get_int("What Is Y? ");

    printf("The Sum of Both Numbers Are: %i \n",add(x,y));

}
int add(int a,int b)
{
    return a+b;
}
