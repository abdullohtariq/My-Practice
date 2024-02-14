#inlcude<iostream>
using namespace std;
void SumOfElements(){
	cout<<endl;
}
int main(){
	int A[5]={6,7,8,9,10};
	int size=sizeof(A)/sizeof(A[0]);
	cout<<size;
	int total=SumOfElements(A,size);
	
}
