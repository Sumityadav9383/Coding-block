//
#include <iostream>
using namespace std;

int main() {
    int minF, maxF, step;
    cin >> minF >> maxF >> step;
    for (int f = minF; f <= maxF; f += step) {
        int c = (5 * (f - 32)) / 9;
        cout << f << "\t" << c << endl;
    }
    return 0;
}