//Shopping Game
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        int aayushTotal = 0;
        int harshitTotal = 0;
        int count = 1;
        while (true) {
            if (aayushTotal + count <= m) {
                aayushTotal += count;
                count++;
            } else {
                cout << "Harshit" << endl;
                break;
            }
            if (harshitTotal + count <= n) {
                harshitTotal += count;
                count++;
            } else {
                cout << "Aayush" << endl;
                break;
            }
        }
    }
    return 0;
}