#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    cout << "Maximum number is: " << max << endl;
    
    return 0;
}
//find maximum of three numbers using if statements