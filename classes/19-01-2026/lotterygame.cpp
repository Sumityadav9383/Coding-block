#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your lottery number: ";
    cin >> n;
    
    if (n >= 300 && n <= 460) {
        cout << "MacBook" << endl;
    }
    else if (n >= 200 && n <= 280) {
        cout << "Kurkure" << endl;
    }
    else if (n >= 1100 && n <= 1500) {
        cout << "Cycle" << endl;
    }
    else if (n > 50 && n <= 80) {
        cout << "Bike" << endl;
    }
    else {
        cout << "Better luck next time" << endl;
    }
    
    return 0;
}
//lottery game using if-else statements