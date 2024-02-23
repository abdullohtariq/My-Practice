#include<iostream>
using namespace std;
int main(){
	while(true){
	
	cout<<"This Program is desgined to tell the type of triangle. "<<endl;
	int a,b,c;
	cout<<"Lenght of 1st side: ";
	cin>>a;
	cout<<"Lenght of 2nd side: ";
	cin>>b;
	cout<<"Lenght of 3rd side: ";
	cin>>c;
	if(a<0 || b<0 || c<0 || a+b<=c || b+c<=a || a+c <=b ){
		cout<<"Your Triangle is invalid";
	}else if(a==b && b==c && c==a){
		cout<<"Your Triangle Is equilateral.";
	}else if (a==b || b==a ||c==a){
		cout<<"Your Triangle is isosceles";
	}else cout<<"Your Triangle is scalene.";
	
	char choice;
    cout<<endl<<endl<<"Do you want To restart (y/n): ";
    cin>>choice;
    if(choice=='y') continue;
    else if(choice=='n') break ;
    else cout<<"invalid Input"<<endl;
    return 0;
	
}
}
