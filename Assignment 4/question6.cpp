//Pair of Roses
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        int M;
        cin >> M;

        sort(a.begin(), a.end());

        int i = 0;
        int j = N - 1;
        int r1 = 0;
        int r2 = 0;

        while (i < j) {
            int sum = a[i] + a[j];
            if (sum == M) {
                r1 = a[i];
                r2 = a[j];
                i++;
                j--;
            } else if (sum < M) {
                i++;
            } else {
                j--;
            }
        }

        cout << "Deepak should buy roses whose prices are " << r1 << " and " << r2 << "." << endl << endl;
    }
    return 0;
}






