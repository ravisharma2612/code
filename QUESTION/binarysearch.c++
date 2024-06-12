#include<iostream>
using namespace std ;
int binarysearch ( int arr[] , int n , int key  ){
   int start = 0 ;
   int end = n-1 ;
   int mid = (start + end )/2 ;
   while ( start <= end ){
       if (arr[mid] == key )  {
         return mid ;
       }
       if ( key > arr[mid]){
        start = mid + 1;
       }
       else {

        end -- ;
        
       } 
       mid = (start+end)/2 ;
        } 
       return -1 ; 

}

int main ()
{
    int arr[] = { 2,3,4,5,6,7,8};
    int length = sizeof(arr) / sizeof(arr[0]);
 
   int index = binarysearch(arr , length , 12 ) ;

   cout << index ; 

}