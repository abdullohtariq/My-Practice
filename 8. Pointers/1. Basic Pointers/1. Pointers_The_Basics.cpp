#include<iostream>
using namespace std;
//A Simple Function which take sqare of a number
void square(int *P){
    
    *P= *P * *P;
    
}

int main(){
    int x; cin>>x;
    int *P;
    P=&x;
    square(P);
    cout<<endl<<P;


}