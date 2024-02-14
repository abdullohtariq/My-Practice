#include<iostream>
using namespace std;
int main(){
	cout<<"Marks in physics out of 100: ";
	int a,b;
	cin>>a;
	cout<<"Marks in math out of 100: ";
	cin>>b;
	int total;
	total = a+b;
	int per = (total*100)/200;
	cout<<"Your Percentage is: "<<per<<" And You Are in ";
	
	
if (( per >= 60 ) && (per <= 100))
cout<< "First division " ; 

else if (( per >= 50 ) && (per < 60))
cout<< "Second division"  ; 
			
else if (( per >= 40 ) && (per < 50))
cout<< "Third division"  ;

else if (per>100)
cout<<"Percentage can't be more than 100";

if ( per < 40 ) 			
cout<< "Fail"  ; 
	
}
