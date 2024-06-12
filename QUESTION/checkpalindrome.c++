#include<iostream>
#include<cstring>
using namespace std ;
bool checkpalindrome( char ch[] ,int n){
   int  start = 0 ;
   int end = n-1 ;

   while ( start <= end ){
   if (ch[start] != ch[end]){
   return 0 ;
   }
 else {
    start ++ ;
    end --  ;

 }

   }
   return 1 ;}

int main(){
char ch[50] ;
cin >> ch ;
int length = strlen(ch) ;
 bool ispalindrome = checkpalindrome( ch , length ) ;
cout << "palindrome or not " << (ispalindrome ? "yes" : "no ") ;   
}