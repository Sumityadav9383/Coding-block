//Is Armstrong Number#include <iostream>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int originalNum = n;
    int numDigits = 0;
    long long totalSum = 0;
    int temp = n;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        long long digitPower = 1; 
        for (int i = 0; i < numDigits; i++) {
            digitPower *= digit;
        }
        totalSum += digitPower;
        temp /= 10;
    }
    if (totalSum == originalNum) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}