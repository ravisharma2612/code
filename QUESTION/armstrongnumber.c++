#include<iostream>
using namespace std ; 
int main()
{
int temp , sum = 0 ,rem = 0 , n  ;
 cin >> n ; 
 temp = n ;
 while (temp!=0){
 rem = temp % 10; 
 sum = sum + rem*rem*rem ;
 temp = temp / 10 ;
 }
 if (sum == n ){
    cout << " this a armstrong number " << endl ; 
 }
 else{
    cout << " this is not a armstrong number " ; 
 }
}