#include<iostream>
using namespace std ;
 class Student{
    private:
    string name ;
    int age  ;
    int height ; 

    public: 
     int getage(){
     return  age ;
    }
 }; 
     int main()
     {
     {
        Student first ;
        int a = first.getage() ;
        cout << a   << endl ; 
     }
}