#include<iostream>
using namespace std;

//A Function that Prints the array.
//we don't know the size of the array but we know this character array end on on \0 or a null
//element this then is used to end printing for an array.

void prints_the(char* A){
    int i=0;
    while(A[i]!='\0'){
        cout<<A[i];
        i++;
    }

}

int main(){
    /*/What is Size of a string?
    we know that character is stored in 1 byte
    since string is combination of characters its size  is equal to
    number of characters in it and +1 to tell where the string ends.
    this is Rule in C++ That Strings Must be Terminated By a null Character.
    which is \0
/*/

    char A[20]="HELLO";
    prints_the(A);
    

    

}