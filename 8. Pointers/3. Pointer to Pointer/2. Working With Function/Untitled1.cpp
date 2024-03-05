#include<iostream>
using namespace std;

void squarePointer1(int *p){
	*p =*p * *p;
}
void unsquarePointer2(int **q){
	*(*q)=*(*q) * *(*q);
}
// Void Functions Don't give return Values.
//dereferencing it one time gives the address of q
//dereferencing it two times gives the adress of p
//dereferencing it three times give us the value on kali variable
void squarePointer3(int ***r){
	*(*(*r))=*(*(*r)) * *(*(*r));
}



int main(){
	cout<<"Enter a Number You Want a Square off: ";
	int kali;
	cin>>kali;
	int *p;
	p=&kali;
	int**q;
	q=&p;
	int ***r;
	r=&q;
	//address of the variable:  
	cout<<"Address of the Variable: "<<endl<<endl;
	cout<<"The Address of kali using kali variable: "<<&kali<<endl;
	cout<<"The Address of Kali Using Single Pointer Variable: "<<p<<endl;
	cout<<"The Address of Kali Using pointer to Pointer Variable: "<<*q<<endl;
	cout<<"The Address of Kali Using pointer to pointer to Pointer Variable: "<<**r<<endl;
	
	//address of single pointer variable  
	cout<<"Address of the Variable: "<<endl<<endl;
	cout<<"The Address of p using kali variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of p Using Single Pointer Variable: "<<&p<<endl;
	cout<<"The Address of p Using pointer to Pointer Variable: "<<q<<endl;
	cout<<"The Address of p Using pointer to pointer to Pointer Variable: "<<*r<<endl;
	//address to pointer to pointer:
	cout<<"Address of the Variable: "<<endl<<endl;
	cout<<"The Address of q using kali variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of q Using Single Pointer Variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of q Using pointer to Pointer Variable: "<<&q<<endl;
	cout<<"The Address of q Using pointer to pointer to Pointer Variable: "<<r<<endl;
	//adress to pointer to pointer to pointer variable: 
	cout<<"Address of the Variable: "<<endl<<endl;
	cout<<"The Address of q using kali variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of q Using Single Pointer Variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of q Using pointer to Pointer Variable: "<<"X (can't be done)"<<endl;
	cout<<"The Address of q Using pointer to pointer to Pointer Variable: "<<&r<<endl;
	//value of variable: 
	cout<<"Value of Variable Using variable: "<<kali<<endl;
	cout<<"Value of Variable Using pointer variable: "<<*p<<endl;
	cout<<"Value of Variable Using pointer to pointer variable: "<<**q<<endl;
	cout<<"Value of Variable Using pointer to pointer to pointer variable: "<<***r<<endl;
	
	//we can use either pointer to get square or un square of the number:
	
	squarePointer1(p);
	cout<<"Using *p Variable And Square1 Function: "<<kali<<endl;
	unsquarePointer2(q);
	cout<<"Using **q Variable And square2 Function: "<<kali<<endl;
	squarePointer3(r);
	cout<<"Using **q Variable And square3 Function: "<<kali<<endl;
	
}
