#include<iostream>
using namespace std ; 
int main(){
   int count = 0 ;
   int arr[] = { 2,4,6,6,4,5,3}  ; 
   
   int n = sizeof(arr) / sizeof(arr[0]) ; 
   for ( int i = 0 ; i < n ; i++) {
      count = 0 ;
      for ( int j = 0 ; j < n ; j++ ) {
      if (arr[i] == arr[j] ){
      count ++ ;
         }
        } 
        if ( count == 1 ) {
         cout << arr[i] << endl ; 
        }
       }
   }












// #include <iostream>

// using namespace std;

// int main()
//  { 
//   int i,j,count=0,size;
//   cout<<"Enter the size of the array ";
//   cin>>size;
//   int arr[size] ;
//   cout<<"Enter the elements of the array ";
//   for(i=0; i<size; i++){
//   cin>>arr[i];
//   }
//   for(i=0;i<size;i++){
//   count=0;
//   for(int j=0;j<size;j++){
//   if(arr[i] == arr[j]){
//   count++;
//   }
//  }
//     if(count==1){
//      cout<<" "<<arr[i];
//      }
//    }

//    return 0;
// }