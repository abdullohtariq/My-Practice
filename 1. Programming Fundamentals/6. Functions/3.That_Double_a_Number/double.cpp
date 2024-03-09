#include<iostream>
using namespace std;
int duble(int x){
    return x*2;
}
int main(){
    cout<<"Enter Your Number:  "<<endl;
    int x; cin>>x;
    int z = duble(x);
    cout<<z;
    return 0;

    }