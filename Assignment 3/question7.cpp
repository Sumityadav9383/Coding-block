//Nth Fibonacci (Hard)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    long long a = 0;
    long long b = 1;
    long long next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    if (n == 1) cout << 1 << endl;
    else cout << b << endl;
    return 0;
}