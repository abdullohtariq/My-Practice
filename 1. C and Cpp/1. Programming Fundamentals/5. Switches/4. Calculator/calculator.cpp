#include<iostream>
using namespace std;
double calculator(int num1,int num2){
    cout<<"Select the ooperation you want to perform: "<<endl;
    cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl;
    cout<<"Enter Now: ";
    char operation1; cin>>operation1;
    switch (operation1)
    {
    case '+':
        cout<<"The Sum of Numbers is: "<<num1+num2;
        break;
    case '-':
        cout<<"The Sum of Numbers is: "<<num1-num2;
        break;
    case '*':
        cout<<"The Sum of Numbers is: "<<num1*num2;
        break;
    case '/':
        cout<<"The Sum of Numbers is: "<<num1/num2;
        break;
    
    
    default:
        break;
    }
}

int main(){
    cout<<"Enter Your First Number: ";
    int num1;
    cin>>num1;
    int num2;
    cout<<"Enter Your Second Number: ";
    cin>>num2;
    calculator(num1,num2);



}