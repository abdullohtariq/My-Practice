#include<iostream>
using namespace std;
int main(){
    int a=5;
    int*p;
    p=&a;
    //A Pointer Variable that points towards the address of another pointer variable,
    //This type of variable use double ** Sign.
    int** q=&p;
    
    
    /*/A pointer variable that points towards address of a pointer variable 
    that is pointing towards the address of another pointer varable which is pointing
    towards the address of a variable/*/

    int***r=&q;
    //Some Print Statements using the Above Code
    cout<<"Trying to Print Value Of a Using all Pointers: "<<endl;
    cout<<"Value At a using P: " <<*p<<endl;
    cout<<"Value At a using q: " <<*(*q)<<endl;
    cout<<"Value At a using r: " <<*(*(*r))<<endl<<endl<<endl;

    cout<<"Trying Printing adress of everything using the r pointer: "<<endl;
    cout<<"Address of a: "<<r<<endl;
    cout<<"Address of p: "<<*r<<endl;
    cout<<"Address of q: "<<*(*r)<<endl;
    cout<<"Value of a: "<<*(*(*r))<<endl;
    

}
