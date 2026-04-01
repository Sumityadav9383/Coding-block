#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    int max = (num1 > num2) ? num1 : num2;
    
    cout << "Maximum: " << max << endl;
    
    return 0;
}
//max of two numbers using ternary operator