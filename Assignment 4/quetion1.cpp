//Sort just Zeroes and Ones
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    if (!(cin >> N)) return 0;
    int zeroCount = 0;
    int val;
    for (int i = 0; i < N; ++i) {
        cin >> val;
        if (val == 0) {
            zeroCount++;
        }
    }
    for (int i = 0; i < zeroCount; ++i) {
        cout << 0 << (i == N - 1 ? "" : " ");
    }
      for (int i = 0; i < (N - zeroCount); ++i) {
        cout << 1 << (i == (N - zeroCount) - 1 ? "" : " ");
    }
    cout << endl;
    return 0;
}