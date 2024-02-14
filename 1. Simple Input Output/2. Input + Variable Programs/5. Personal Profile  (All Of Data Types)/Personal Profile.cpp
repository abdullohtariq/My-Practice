#include<iostream>
#include<string>
using namespace std;
int main()
{
	while(true){
	
	cout<<"What is Your Name? ";
	string name;
	cin>>name;
	cout<<"What Is Your Age? \n";
	int x = 0;
	cin>>x;
	cout<<"What is Your height in Feet and inches.Use Decimal Points after feet. \n";
	float y = 0;
	cin>>y;
	cout<<"What is Your Lucky Number? \n";
	int z =0;
	cin>>z;
	cout<<endl<<"Name: "<<name;
	cout<<"\nAge: "<<x <<" Years\n";
	cout<<"Height: "<<y <<" Feets\n";
	cout<<"Lucky Number: "<<z;
	char choice;
	cout<<endl<<"Click y to restart or n to close the program";
	cin>>choice;
	if(choice=='y') continue;
	else if(choice=='n') break;
	
	
	
	}
	return 0;
	
	
}
