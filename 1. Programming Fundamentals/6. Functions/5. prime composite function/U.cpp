#include<iostream>
using namespace std;

//function to check wether a number is even or odd!
void isprime(int num){
    for(int i=2;i<=num/2;i++) {
	if(num%i==0){
		cout<<num<<" is composite.";
	}else{
		cout<<num<<" is prime";
	}
    }
	
	}


//Start Of Program:
int main(){
	int num;
	cin>>num;
	isprime(num);
	return 0;
}
