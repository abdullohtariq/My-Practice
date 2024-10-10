#include<iostream>
using namespace std;
//Class (Atributes/Behaviours):

/*
A Class is the buliding block of the OOP. 
A Class is User Define Data Type.

A Class is little more complex than normal predefined Variables.
You Can Show Atributes and Behaviours in classes to show Atributets you need mutipule pre-defined variables which make a group and than
make the atributes.
behaviour of the class is defined by the functions inside the class.
*/

class Empolyee{
    string Name;
    string Company;
    int Age;
};

int main(){
    //Now You can use the above class of Employee As Data Type.
    Empolyee employee1;
    //We can use all variable:
    employee1.Name = "Abdullah";
    employee1.Age = 10;
    employee1.Company = "Meta";


}
