#include<iostream>
using namespace std;
int main(){
	/* Calculation of total expenses */ 
	int qty, dis = 0 ; 
	float rate, tot ; 
	cout <<  "Enter quantity and rate "  ; 
	cin >> qty;
	cin>> rate;
	if ( qty > 1000 ) 
	dis = 10 ; 
	tot = ( qty * rate ) - ( qty * rate * dis / 100 ) ; 
	cout << "Total expenses = Rs. "<<tot;  
 

}
