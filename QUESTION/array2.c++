/// Largest elements 


#include<iostream>
using namespace std ;
int main ()
{
   int n = 4;
   int  arr[] = {2,45,8,5,6};
   int largest ;
   largest =  arr[0] ;
    for ( int i = 1; i <=n ; i++)
    {
    if (arr[i] > largest )
    { 
         largest  = arr[i]  ;

    }
    }
    cout << " the largest element " << largest ; 
  return 0 ;
}