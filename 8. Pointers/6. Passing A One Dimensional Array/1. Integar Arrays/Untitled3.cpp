#include<iostream>
using namespace std;


//this is the function which return the sum of all elements in an array 

//Arrays are always passed as referance  parameters, because arrays can be very large at sometimes
//so it doesn't make sence to make a copy of array each time.

/*/Why SizeoF is not in Function?
Also Here A[] is not intreprated as the full array with all of its elements 
rather it is simply a pointer toward the first element of the array.
So, we cann't include the syntax here which tells the number of elements in array
cause the array here is not present in full size rather
it is just a pointer variable to the first element of the array./*/
int sumArray(int size, int* A)//int A[] or int* A its' the same thing.
{
	int sum=0;
    //a loop to go throught all values of the Array
    for(int i=0; i<size;i++){
        //sum+ is add each value in it before it get changed.
        //this is not A[i], Rather the pointer to A[i] or the value which is at A[i]
    	sum+=A[i];
        
	}
    //before clearing the this function from the stack memory we return sum.
	return sum;
}


int main(){


    //Decalaring a array in the main function.
    int A[5]={1,2,3,4,5};


    /*/How the blow line Works?
    the way to count the number of elements in an array
    (sizeof) syntax tell the size of something in bytes instead of elements,numbers,e.tc
    so we first get the size of the full Array in Bytes then,
    we get the size of single element in array in bytes then,
    we divide the size of full array in bytes by size of single element in array.
    which gives us the number of elements in an array.Which we store in size variable.
    /*/
    int size=sizeof(A)/sizeof(A[0]);


    /*/How This Line Works?
    this is the function which return the sum of all elements in an array 
    check the function"sumArray" ending it is returning the sum of all elements,
    the returned vlaue is then stored in "returend_Sum" Variable./*/
    int returned_Sum = sumArray(size,A);//A or &A[0] is same thing.

    //Printing the sum of all values of array.
    cout<<"The Total Sum Of Values In Arrays is:  "<<returned_Sum;
        
    }