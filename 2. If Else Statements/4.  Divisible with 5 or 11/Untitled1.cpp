#include<iostream>
using namespace std;
int main(){
    while(true){
    cout<<"Give Your Number to check, if it is divisible by 5 or 11: ";
    int a;
    cin>>a;
    if(a%5==0 && a%11==0){
        cout<<"The Number is divisible with both 5 and 11";
    }else if(a%5==0){
        cout<<"The Number is only divisible With 5";
    }else if(a%11==0){
        cout<<"The Number is only divisible with 11";
    }else cout<<"The Number is not divisible with either 11 or 5."<<endl;
    
    char choice;
    cout<<endl<<endl<<"Do you want To restart (y/n): ";
    cin>>choice;
    if(choice=='y') continue;
    else if(choice=='n') break ;
    else cout<<"invalid Input"<<endl;
    
    
    }
    
}
