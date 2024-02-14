//arrays first program
#include<iostream>
using namespace std;
int main(){
	cout<<"Give the marks of students: "<<endl;
	
	int marks[5]; //array to Store 5 Values from 0 to 4
	
	//loop to get all the informations.
	for(int i;i<=4;i++){
	cout<<"-";
	cin>>marks[i];
	}
	
	cout<<"The Numbers You Have Given Are:"<<endl;
	
	//loops to print all the information we gathered.
	for(int j=0;j<=4;j++){
	cout<<"Number "<<j+1<<" :"<<marks[j]<<endl;
	}
}
