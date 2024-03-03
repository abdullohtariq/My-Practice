#include<iostream>
using namespace std;
int main(){
	cout<<"How much elements of fibonaci series you want to print: "<<endl;
	int num; cin>>num;
	int first=0;
	int second=1;
	int next;
	for(int i=0;i<num;i++){
		cout<<first<<endl;
		next=first+second;
		first=second;
		second=next;
	}
	
}
