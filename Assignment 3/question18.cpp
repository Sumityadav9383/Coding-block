//Inverse of numbe
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos = 1;
    int inverse = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n / 10;
        int multiplier = 1;
        for (int i = 1; i < digit; i++) {
            multiplier *= 10;
        }
        inverse += pos * multiplier;
        pos++;
    }
    cout << inverse;
    return 0;
}