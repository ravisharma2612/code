#include<iostream>
#include<string>
using namespace std ;

void reverse(string& str , int n )
{
    int start = 0 ;
    int end = n-1 ;
    while ( start < end ){
        swap (str[start++] , str[end--]) ; 
  }
}

int main(){
string str ;
 cin >> str ;
 int length = str.length();
 reverse(str , length );
 cout << str ;


}
