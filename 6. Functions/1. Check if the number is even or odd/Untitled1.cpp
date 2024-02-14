#include<iostream>
using namespace std;

//function to check wether a number is even or odd!
void iseven(int num){
	if(num %2==0){
		cout<<num<<" is even.";
	}else{
		cout<<num<<" is odd";
	}
	}

//Start Of Program:
int main(){
	int num;
	cin>>num;
	iseven(num);
	return 0;
}
