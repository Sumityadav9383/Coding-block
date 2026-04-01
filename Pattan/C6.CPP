#include <iostream>
using namespace std;

int main() {
    
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= (rows - i) * 3; j++) {
            cout << "  "; 
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}