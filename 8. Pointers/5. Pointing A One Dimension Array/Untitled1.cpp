#include<iostream>
using namespace std;
int main(){
    //Since The array store variables in memory consectivtly in a line.
    //the below array is storing 5 variables.
    int A[5]={6,7,8,9,10};

    //the address of the first element can be printed as:
    
    cout<<"The Address of the First Variable in Array: "<<A<<endl;
    
    //the value of the first variable in an array can be printed as:
    
    cout<<"The Value of the First Varable in Array: "<<A[0]<<endl;
    
    //the value address of the first variable can also be printed as:
    
    cout<<"The Adress of the First Variable in Array: "<<&A[0]<<endl;
    
    
    //the value of A which is address can be deinprinted by *A
    //to give the value of first element rather then its address:
    
    cout<<"The Value of the first element: "<<*A<<endl;


    
}
