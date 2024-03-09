#include<iostream>
using namespace std;
int main(){
	int per;
	cout<<"Give Your Percentage: ";
	cin>>per;
	
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
