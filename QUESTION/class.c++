#include<iostream>
using namespace std ;

class Student  
{
    string name ;
    int age ;
    bool gender ;
} ; 


int main()
{
    Student yash ;
    yash.name = "yash";
    yash.age = 20 ;
    yash.gender = 1 ;

  cout << yash.name << yash.age << yash.gender ;

}