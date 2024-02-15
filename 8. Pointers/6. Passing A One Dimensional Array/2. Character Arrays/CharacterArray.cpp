#include<iostream>
using namespace std;

int main(){
    /*/What is Size of a string?
    we know that character is stored in 1 byte
    since string is combination of characters its size  is equal to
    number of characters in it and +1 to tell where the string ends.
    this is Rule in C++ That Strings Must be Terminated By a null Character.
/*/

    char A[]="HELLO";
    int *A1;
    A=A1;
    for (int i = 0; i < 6; i++)
    {
        cout<<A1+i;
    }
    

}