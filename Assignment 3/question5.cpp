//Print Series
#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int count = 0;
    int n = 1;

    while (count < N1) {
        int term = 3 * n + 2;
        if (term % N2 != 0) {
            cout << term << endl;
            count++;
        }
        n++;
    }
    return 0;
}