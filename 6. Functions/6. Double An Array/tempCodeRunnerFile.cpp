#include<iostream>
using namespace std;

void doubleArray(int arrayOne[],int sizearrayOne){
    cout<<"Your Numbers Are: "<<endl;
    for (int i = 0; i < sizearrayOne; i++)
    {
        cout<<i<<". "<<arrayOne[i]*2<<endl;
    }