#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
//since a int fuction return an integer
int main(){
    cout<<"Enter Your Number:  "<<endl;
    int x; cin>>x;
    int z = square(x);
    cout<<z;
    return 0;

    }