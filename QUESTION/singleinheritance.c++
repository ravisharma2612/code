
#include<iostream>
using namespace std;

class vehicle {
public:
    string name;
    string model;

    
};

class car : public vehicle {
public:
    car() {
        name = "mecedes";
        model = "c234";
    }
};

int main() {
    car v1;
    cout << v1.name << "-" << v1.model;
    return 0;
}
