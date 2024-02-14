#include<iostream>
using namespace std;
//decalaring a new 'a' local variable. Which has same value of last 'a' local variable from main.
void evenodd(int a){
    if(a%2==0){
    	cout<<"This is Even";
	}else{
		cout<<"This Number is odd";
	}
}
int main(){
	cout<<"Give Your Number: "<<endl;
    int a;cin>>a;
    //Giving the variable itself so the other  local variable'a'from evenodd function can copy its value.
    evenodd(a);
     
}
