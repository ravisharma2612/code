#include<iostream>
using namespace std ;
 int binarysearch(int arr[] , int size , int key ){
    int start = 0 ;
    int end = size - 1;
    int mid = (start+end )/2 ; 

    while (start <= end ){
     if (key == arr[mid] ){
        return mid ;
      }
       // for right side 
       if ( key > arr[mid] ){
        start = mid+1 ;
    }
       else {
        end = mid - 1 ;
    } 

    mid = (start+end)/2 ;

    }
    return -1 ; 
 }

 int main(){

    int odd[5] = { 2,4,6,8,10 } ;
    int arr[6] = {2,4,6,8,10,12} ;
    int index = binarysearch( arr , 5 , 17) ;
     cout << "index print " << index  << endl ;
           
    index = binarysearch( odd , 5 , 3) ;
    cout << "index print of odd array " << index ;
    }
 