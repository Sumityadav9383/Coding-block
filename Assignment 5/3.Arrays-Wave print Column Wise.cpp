#include <iostream>
using namespace std;
int main() {
    int M, N;
    if (!(cin >> M >> N)) return 0;
    int arr[10][10];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < N; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < M; i++) {
                cout << arr[i][j] << ", ";
            }
        } 
        else {
            for (int i = M - 1; i >= 0; i--) {
                cout << arr[i][j] << ", ";
            }
        }
    }
    cout << "END" << endl;
    return 0;
}