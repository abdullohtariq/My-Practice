#include<iostream>
using namespace std;
int main(){
	
	while(true){
	
	cout<<"Basic Salary of the employee: ";
	double a;
	cin>>a;
	double hra,da;
	if(a<=10000){
	
		hra=0.2;
		da=0.8;
		}
	else if(a<=20000){
		hra=0.25;
		da=0.9;
	}else if(a>20000){
		hra=0.3;
		da=0.95;
	}else{
		cout<<"You Have Type Somthing That This Program dont Understand.";
	}
	double realHra,realDa,salary;
	realHra=a*hra;
	realDa=a*da;
	salary=a+realHra+realDa;
	cout<<"The Gross Salary is "<<salary<<endl;
	cout<<"House Rent Allowance: "<<realHra<<endl;
	cout<<"Dearness Allowance: "<<realDa<<endl<<endl<<endl;
	
	
	char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
	}
	return 0;
}
