#include<iostream>
using namespace std ; 
int main(){
 
 int arr[] = {2,4,6,7,8,9,2,4,6,8,10,12 ,12};
  int n  = sizeof(arr)/sizeof(arr[0]) ;

  for ( int i = 0 ; i < n ; i++){
    for ( int j = i+1 ; j < n ; j++){
        if (arr[i] == arr[j]) {
          //   cout << arr[j] << endl ;       
    }
    else {
        cout << arr[j] << endl ; 
        break ; 
    }
  }
 }
}
