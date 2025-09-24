#include<iostream>
using namespace std;
int main(){
    cout<<"Enter The Number till where You Wants the number to print: ";
    int cash;
    cin>>cash;
    for (int i = 0; i < cash; i++)
    {
        cout<<i;
        cout<<", ";
    }
    return 0;   }