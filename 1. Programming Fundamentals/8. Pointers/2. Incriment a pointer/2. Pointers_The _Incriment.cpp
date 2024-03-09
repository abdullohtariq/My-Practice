#include<iostream>
using namespace std;

int input_Array(int array[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<"Your "<<i+1<<" Number is: "<<endl;
        cin>>array[i];
    }
    
}

int Output_Array(int array[],int size){
    cout<<"Your Array Numbers Are: ";
    for (int i = 0; i <size; i++){
    cout<<array[i];
    cout<<" ,";
    }
}

int main(){
    int array[2];
    int size= sizeof(array)/sizeof(array[0]);
    input_Array(array,size);
    Output_Array(array,size);

    return 0;


}