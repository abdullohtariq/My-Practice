#include<stdio.h>
#include<cs50.h>
int main(void){

    string answer = get_string("What is Your Name? ");
    printf("Hello, %s\n", answer);
}
