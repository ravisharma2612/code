#include<iostream>
using namespace std ;
int getLength(char name[])
{
    int count = 0 ;
    for (int i = 0 ; name[i] != '\0' ; i++)
   { 
    count ++ ;
    }
    return count ; 
}
int main(){
    char name[] = "Hello";
    cin >> name ; 
    cout << " my name ->" << name <<  endl ; 
    int lenth = getLength(name) ; 
    cout << lenth ;

}
