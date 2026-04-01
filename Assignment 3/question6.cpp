//LCM
#include <iostream>
using namespace std;

int main() {
    long long n1, n2;
    cin >> n1 >> n2;
    long long max_val;
    if (n1 > n2) {
        max_val = n1;
    } else {
        max_val = n2;
    }
    while (true) {
        if (max_val % n1 == 0 && max_val % n2 == 0) {
            cout << max_val << endl;
            break;
        }
        max_val++;
    }
    return 0;
}