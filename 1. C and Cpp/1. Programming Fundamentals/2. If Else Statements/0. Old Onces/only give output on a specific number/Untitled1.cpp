#include<iostream>
using namespace std;
int main(){
	cout<<"This Program Print a Number only if you type 5: ";
	int i =0 ;
	cin>>i;
	if(i==5){
		cout<<"you type: 5"<<endl<<"Your new Number Is 6.";
	}else{
		cout<<"Why Didn't You Type 5?";
	}
	return 0;
}
