#include<iostream>
using namespace std;
int main(){
	cout<<"Fibonaci Numbers: "<<endl;
	int first=0;
	int second=1;
	int next;
	int n=42;
	while(n>2){
		cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
		n--;
	}
	}
