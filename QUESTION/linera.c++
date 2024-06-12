#include<iostream>
using namespace std ;
int main()
{
     int arr[4] = {2,4,6,8};
     int key = 4 ;
     for (int i = 0 ; i<=3 ; i++){
        if (arr[i]== key ) {
            cout << i <<  endl ; 
        }
     }
}