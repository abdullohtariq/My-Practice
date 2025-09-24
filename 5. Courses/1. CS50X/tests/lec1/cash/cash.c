#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    int n;
    int coin = 0;
    do
    {
        n = get_int("Changed Owed ");
    }
    while (n < 0);
    while (n >= 25)
    {
        n = n - 25;
        coin++;
    }
    while (n >= 10)
    {
        n = n - 10;
        coin++;
    }
    while (n >= 5)
    {
        n = n - 5;
        coin++;
    }
    while (n >= 1)
    {
        n = n - 1;
        coin++;
    }
    printf("%i\n", coin);
}
