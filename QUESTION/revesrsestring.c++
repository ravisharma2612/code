#include<iostream>
#include<cstring>
using namespace std ; 
int  reverse(char str[] , int n  ){
    int start = 0 ;
    int end = n-1 ;
     while (start < end )
    {
        swap(str[start++] , str[end--]) ;
    }

}

 int main(){
    char str[50] = "HELLO"  ;
    int length= strlen(str) ;
    reverse ( str , length ) ;
    cout << str ; 
    
}


// #include <iostream>
// #include <cstring>
// using namespace std;

// void reverse(char str[], int n) {
//     int start = 0;
//     int end = n - 1;
//     while (start < end) {
//         swap(str[start++], str[end--]);
        
        
//     }
// }

// int main() {
//     char str[50] = "HELLO";
//     int length = strlen(str);
//     reverse(str, length);
//     cout << str;
//     cout << length ;
//     return 0;
// }

