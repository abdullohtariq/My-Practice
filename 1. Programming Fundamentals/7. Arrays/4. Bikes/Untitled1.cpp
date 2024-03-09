#include<iostream>
using namespace std;
main(){
	int bike[10];
	for(int i=0;i<10;i++){
		cout<<"Gives Your Numbers for bike "<<i+1<<": ";
		cin>>bike[i];
	}
	cout<<"Your 5th Number is: ";
	cout<<bike[4];
	
	return 0;
	
}
