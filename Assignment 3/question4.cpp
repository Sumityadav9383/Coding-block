//Binary To Decimal
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long decimalValue = 0;
    long long base = 1;

    while (n > 0) {
        long long lastDigit = n % 10;
        n = n / 10;
        decimalValue += lastDigit * base;
        base = base * 2;
    }

    cout << decimalValue << endl;

    return 0;
}