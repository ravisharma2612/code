#include<iostream>
#include<string>
using namespace std ; 
bool palindrome ( string& str , int n ){
    int start = 0 ;
    int end = n - 1 ;
    while (  start < end ){
         if ( str[start] != str[end] ){
            return  0 ;
         }
          else {
            start++;
            end -- ; 
          }
         }
         return 1 ;
}
 int main() {
    string str ;
    cin >> str ;
    int length = str.length() ;
    bool ispalindrome = palindrome(str , length) ;
    cout << (ispalindrome ? "yes" : "no") ; 
}