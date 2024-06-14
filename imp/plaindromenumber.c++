#include<iostream>
using namespace std ; 
int main(){
    int n ;
    cin >> n ; 
    int temp , rem , sum = 0 ;
   
   temp = n ;
   while ( n > 0 ) {
    rem = n% 10 ;
    sum = rem + (sum * 10);
    n = n /   10 ;
   }
   if ( temp == sum )
 {
    cout << " palindrome " ; 

 }
  else {
    cout << "  not palindrome " << endl ; 

  }
  return 0 ; 

   }

