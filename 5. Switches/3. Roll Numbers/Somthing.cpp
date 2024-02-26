#include<iostream>

using namespace std;

int main(){
    cout<<"YoUr Roll Number: "<<endl;
    int rollNumber;
    cin>>rollNumber;
    switch (rollNumber)
    {
    case 1:
        cout<<"Name: Bilal Ijaz"<<endl;
        cout<<"You Can Show Some Information Here too.";
        break;
    case 2:
        cout<<"Name: Abdullah Tariq"<<endl;
        cout<<"You Can Show Some Information Here too.";
        break;
    case 3:
        cout<<"Name: Sami Ijaz"<<endl;
        cout<<"You Can Edit Some Information here too.";
        break;
    
    default:
        cout<<"Please Select Someone between 1 and 3";
        break;
    }



    }