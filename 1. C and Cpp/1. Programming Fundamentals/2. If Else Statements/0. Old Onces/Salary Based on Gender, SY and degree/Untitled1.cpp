#include <iostream>

using namespace std;

int main() {

char gender;
int yearsOfService;
int qualifications;
int salary;

cout << "Enter Gender, Years of Service and Qualifications (0G,1 = PG):";
cin >> gender >> yearsOfService >> qualifications;

if (gender == 'm' && yearsOfService >= 10 && qualifications == 1) {
salary = 15000;
} else if ((gender == 'm' && yearsOfService >= 10 && qualifications == 0) || (gender == 'm' && yearsOfService < 10 && qualifications == 1)) {
salary = 10000;
} else if (gender == 'm' && yearsOfService < 10 && qualifications == 0) {
salary = 7000;
} else if (gender == 'f' && yearsOfService >= 10 && qualifications == 1) {
salary = 12000;
} else if (gender == 'f' && yearsOfService >= 10 && qualifications == 0) {
salary = 9000;
} else if (gender == 'f' && yearsOfService < 10 && qualifications == 1) {
salary = 10000;
} else if (gender == 'f' && yearsOfService < 10 && qualifications == 0) {
salary = 6000;
}else{
	cout<<"some information you have given is not identitable.";
}

cout << "\nSalary of Employee = " << salary;

return 0;
}
