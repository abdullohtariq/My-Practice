#include<iostream>
using namespace std;
int main(){
	while(true){
	
	int physics,chemistry,biology,maths,computers,totalMarks,totalPercentage;
	cout<<"What are your Marks in bellow Subjects out of 100. This Program Will Tell Your grade and percentage in the end. "<<endl;
	cout<<"Your Marks in Physics: ";
	cin>>physics;
	cout<<"Your Marks in Chemistry: ";
	cin>>chemistry;
	cout<<"Your Marks in biology: ";
	cin>>biology;
	cout<<"Your Marks in Maths: ";
	cin>>maths;
	cout<<"Your Marks in Computers: ";
	cin>>computers;
	totalMarks = physics+chemistry+biology+maths+computers;
	totalPercentage=(totalMarks*100)/500;
	cout<<"Your Percentage: "<<totalPercentage<<endl;
	if(totalPercentage>=90&&totalPercentage<=100){
    	
    	cout<<"You have recevied A grade." <<endl<<endl;
    }else if(totalPercentage>=80&&totalPercentage<=90){
    	
        cout<<"You have recevied B grade. "<<endl<<endl;
    }else if(totalPercentage>=70&&totalPercentage<=80){
    	
        cout<<"You have recevied C grade."<<endl<<endl;
    }else if(totalPercentage>=60&&totalPercentage<=70){
    	
        cout<<"You have recevied D grade."<<endl<<endl;
    }else if(totalPercentage>=40&&totalPercentage<=60){
    	
        cout<<"You have recevied E grade."<<endl<<endl;
    }else if(totalPercentage<40){
    	
        cout<<"You have recevied F grade. "<<endl<<endl;
    }else{
        cout<<"Percentage Can't be More than 100.";
    }
    char choice;
    cout << "Do You want to Restart? (y/n): ";
    cin >> choice;

    if (choice == 'y') continue; 
    else if (choice == 'n') break; 
    else cout << "Invalid input. Please try again." << endl;
	
	
	return 0;
}
}
