#include<iostream>
using namespace std;
main(){
	int bike[10];
	for(int i=0;i<10;i++){
		cout<<"Gives Your Number Plates for bike "<<i+1<<": ";
		cin>>bike[i];
	}
	while(true){
	
	cout<<"Enter the number of Bike to get its Number Plate: ";
	int y=0;
	cin>>y;
	
	cout<<"The Number plate of bike Number "<<y<<" is: "<<bike[y-1]<<endl;
}
	
	return 0;
	
}
