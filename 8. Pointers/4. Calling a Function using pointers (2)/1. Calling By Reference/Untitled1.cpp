#include<iostream>
using namespace std;
	//making a pointer variable instead of decalring a new variable named a.
	
void dou(int* p){
    *p= *p * 2;
}
int main(){
    int a=5;
    //referencing the address of the variable instead of the variable itself.
    dou(&a);
    cout<<a;
    
    /*/we use 'call by reference' instead of 'call by value'
	 beacuse it can save very much space/memory in large data bases where
	 if we make a copy of variable it would take a large amount of memory. /*/
     
}
