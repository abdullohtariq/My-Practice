#include<iostream>
using namespace std;

void doubleArray(int arrayOne[],int sizearrayOne){
    cout<<"Your Numbers Are: "<<endl;
    for (int i = 0; i < sizearrayOne; i++)
    {
        cout<<i<<". "<<arrayOne[i]*2<<endl;
    }
}
//like a int funtion void function doesn't return anything
int main(){
    cout<<"Enter Your Numbers: "<<endl; 
    int arrayOne[5];
    //getting numbers in array.
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter Number "<<i<<": "<<endl;
        cin>>arrayOne[i];
    }
    int sizearrayOne = sizeof(arrayOne)/sizeof(arrayOne[0]);

    doubleArray(arrayOne,sizearrayOne);

}