#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Give 3 Different values and this application will tell you which one is maximum\n";
	
	cout<<"First Value: ";
	cin>>a;
	
	cout<<"Second Value: ";
	cin>>b ;
	
	cout<<"Thrid Value: ";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"The Maximum Number is "<<a<<". Which is the First Value You have Given";
		}else if(c>a){
			cout<<"The Maximum Number is "<<c<<". Which is the thrid Value You have Given";
		}
		
		}else if(b>a){
		if(b>c){
			cout<<"The Maximum Number is "<<b<<". Which is the 2nd Value You have Given";
		}else if(c>b){
			cout<<"The Maximum Number is "<<c<<". Which is the thrid Value You have Given";
		}
	}else{
		cout<<"Some of values are equal, or there is no maximum";
	}
	
	return 0;
}
