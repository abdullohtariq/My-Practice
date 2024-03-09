#include<iostream>
using namespace std;
int main(){
	while(true){
	
	int hours,mints;
	cout<<"Enter Hour:";
	cin>>hours;
	cout<<"Enter mints: ";
	cin>>mints;
	if(hours>=12 && hours<24){
		cout<<"It is PM"<<endl<<endl<<endl;
	}
	else if(hours<12 || hours<=0 || hours==24 ){
		cout<<"It is AM"<<endl<<endl<<endl;
	}else cout<<"The Hour cannot be greater than 24 and less than 0.";
	
	
    char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
	return 0;
	
}
}
