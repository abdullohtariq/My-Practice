#include <iostream>
using namespace std;


int main() {
    while(true){
    cout << "This Program Will Tell Your Grade Based On Your Percentage in Quiz,Mids and Finals "<<endl;
    double quiz,mids,finals,totalPercentage;
    cout<<"Percentage in Quiz: ";
    cin>>quiz;
    cout<<"Percentage in Mids: ";
    cin>>mids;
    cout<<"Percentage in Finals: ";
    cin>>finals;
    totalPercentage=(quiz+mids+finals)/3;
    if(totalPercentage>=90&&totalPercentage<=100){
    	
        cout<<"You have recevied A grade. With average percentage of "<<totalPercentage<<endl<<endl;
    }else if(totalPercentage>=70&&totalPercentage<=90){
    	
        cout<<"You have recevied B grade. With average percentage of "<<totalPercentage<<endl<<endl;
    }else if(totalPercentage>=50&&totalPercentage<=70){
    	
        cout<<"You have recevied C grade. With average percentage of "<<totalPercentage<<endl<<endl;
    }else if(totalPercentage<50){
    	
        cout<<"You have recevied F grade. With average percentage of "<<totalPercentage<<endl<<endl;
    }else{
        cout<<"Percentage Can't be More than 100.";
    }
    
    char choice;
    cout<<"Do you want To restart (y/n): ";
    cin>>choice;
    if(choice=='y') continue;
    else if(choice=='n') break ;
    else cout<<"invalid Input"<<endl;
    
    
    }

    return 0;
}
