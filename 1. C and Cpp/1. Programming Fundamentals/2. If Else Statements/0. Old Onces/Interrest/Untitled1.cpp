#include<iostream>
using namespace std;
int main()
{
int p, n, count ;
float r, si ;
for (count = 1 ; count <= 3 ; count + 1)
    {
        cout << "Enter value of p, n, r: "<<endl ;
        cin >> p >>n >>r ;
        si = p * n * r / 100 ;
        cout << "Simple Interest = Rs." << si<<endl ; 
     }
}

