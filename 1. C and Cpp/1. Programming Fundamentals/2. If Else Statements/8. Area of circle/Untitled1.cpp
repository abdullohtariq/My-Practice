#include<iostream>
using namespace std;
int main(){
	while(true){
	
	cout<<"What is Radius Of Your Circle: ";
	float a,b;
	cin>>a;
	if(a==0){
		cout<<"A Circle Can't Have a radius of 0."<<endl<<endl;
	}else{
	b=(a*a)*(3.14);
	cout<<b<<" is Area Of Your Circle"<<endl<<endl;
}
	
	char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
	
	
	
	return 0;
}
}
