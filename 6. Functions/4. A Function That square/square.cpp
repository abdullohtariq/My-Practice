#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int main(){
    cout<<"Enter Your Number:  "<<endl;
    int x; cin>>x;
    int z = square(x);
    cout<<z;
    return 0;

    }