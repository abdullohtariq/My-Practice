#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // this code is using get string via cs50 library
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
}
