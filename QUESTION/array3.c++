// SMALLEST NUMBER IN A ARRAY 
#include<iostream>
using namespace std ;
 int main()
 {
    int n = 7 ;
    int arr[] = { 3,4,5,6,2,1,8} ;
    int Smallest =  arr[0];
    for ( int i = 1 ; i < n ; i++)
    {
        if (arr[i] < Smallest )
        {
             Smallest = arr[i]; 
        }
    }
   cout << " the smallest number is " << Smallest ; 
   return 0 ; 

 }