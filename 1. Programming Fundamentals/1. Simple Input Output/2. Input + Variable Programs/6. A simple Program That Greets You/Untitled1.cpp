#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	cout<<"What Is Your Name? "<<endl;
	string a;
	getline(cin,a);
	cout<<"Hello, "<<a<<". How Are You??"<<endl<<"Note: Use all Lowercase"<<endl;
	string b;
	getline(cin,b);

	if(b=="fine"  || "good" || "very good" || "very fine"|| "well"|| "very well"|| "i am good"|| "i am very good"|| "i am well")
	cout<<"Good To Hear u are doing okay, "<<a<<endl;
	else if(b=="Not Fine")
	cout<<"That is very Nice ";
	return 0;
	
}
