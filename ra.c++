#include<iostream>
using namespace std ;

int maximumnumber (int arr[] ,int n)
{
int maximum = INT_MIN  ;
for (int i = 0 ; i<=n ; i++)
{
   if (arr[i]>maximum)
   {
     maximum = arr[i];
   }
}
return maximum ; 
}
int main()
{
int n ;
cin >> n  ;
int arr [] = { 2,4,6,8,7,9 }
int maxvalue  =  maximumnumber(arr , n )  ;
cout << " maximum element in the array " << maxvalue ; 
}


