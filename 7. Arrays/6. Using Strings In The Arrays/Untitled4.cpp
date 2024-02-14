#include <iostream>
using namespace std;

int main() {
 // Getting names of the students: 
 cout << "Give Name Of Students: " << endl;
 string nameofStudents[3];
 for (int i = 0; i < 3; i++) {
   cout << "Name Of Student " << i + 1 << ": ";
   cin >> nameofStudents[i];
 }

 // Array of subject names: 
 string nameofSubjects[3] = {"Physics", "Chemistry", "Maths"};

 // Getting marks of students in the subjects: 
 int marksofStudents[3][3];
 for (int k = 0; k < 3; k++) {
   cout << endl << endl << "Marks of " << nameofStudents[k] << " in: " << endl;
   for (int j = 0; j < 3; j++) {
     cout << "Enter Marks of " << nameofSubjects[j] << ":";
     cin >> marksofStudents[k][j];
   }
 }

 // Calculating and printing percentages for each student, along with pass/fail status: 
 for (int k = 0; k < 3; k++) {
   int totalMarks = 0;
   for (int j = 0; j < 3; j++) {
     totalMarks += marksofStudents[k][j];
   }
   float percentage = (totalMarks / 300.0) * 100;

   cout << endl << "Percentage of " << nameofStudents[k] << ": " << percentage << "%";

   if (percentage >= 33) {
     cout << " (PASS)";
      
     	if(percentage>=50) cout<<" (Eligible For BS-CS)";
     		
     	else if(percentage<=50) cout<<" (Not Eligible For BS-CS)";
     		
     	}
    else {
     cout << " (FAIL)" << endl;
 }
    
   
 }

 return 0;
}

