#include<iostream>
using namespace std;
int main(){
	cout<<"What are Your Marks in F.S.C (Out Of 1100): ";
	double x,y ; cin>>x;
	y=(x/1100)*100;
	cout<<endl<<"Your Percentage is "<<y<<".";
	if(y>50){
		cout<<"You Are Eligible For BS-CS.";
	}else if(y<50){
		cout<<"You Are Not Eligible For BS-CS.";
	}else if(y>100 || y<0){
		cout<<"Percentage Must be Between 100 And 0";
	}else{
		cout<<"Something Just Went wrong Try Runing Program From Start";
	}
	
}
