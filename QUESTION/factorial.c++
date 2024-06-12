#include <iostream>
using namespace std ; 
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}
int main() {  
int result = factorial(4);
cout << "Factorial of " << 5 << " is: " << result << endl;
return 0;
}
