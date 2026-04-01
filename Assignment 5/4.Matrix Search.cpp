#include <iostream>
#include <vector>
using namespace std;
int searchInSortedMatrix(int N, int M, vector<vector<int>>& matrix, int x) {
    int i = 0;
    int j = M - 1;

    while (i < N && j >= 0) {
        if (matrix[i][j] == x) {
            return 1; 
        } else if (matrix[i][j] > x) {
            j--; 
        } else {
            i++; 
        }
    }
    return 0; 
}
int main() {
    int N, M;
    if (!(cin >> N >> M)) return 0;
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
    int x;
    cin >> x;
    cout << searchInSortedMatrix(N, M, matrix, x) << endl;
    return 0;
}