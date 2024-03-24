#include<iostream>
#include<climits>
using namespace std ;

int maximumofarray(int arr[] , int n )
{
    int maximumofarray = INT_MIN ;
   for (int i = 0 ; i <n ; i++)
   {
       if(arr[i]>maximumofarray)
       {
        maximumofarray = arr[i] ; 
       }
   }

  return maximumofarray;   
}




int main()
{
 int n ;
 cin >> n ;
 int arr[n] ;
for (int i = 0 ; i< n ; i++)
{
   cin >>  arr[i];
}
int max= maximumofarray(arr , n );
cout << max <<"is the maximum number in the array ";


}

