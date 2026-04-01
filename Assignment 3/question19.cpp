//Odd and Even back in Delhi
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 
    while (N--) {
        long long carNo;
        cin >> carNo;
        int sumEven = 0;
        int sumOdd = 0;
        while (carNo > 0) {
            int digit = carNo % 10;
            
            if (digit % 2 == 0) {
                sumEven += digit;
            } else {
                sumOdd += digit;
            }   
            carNo /= 10;
        }
        if (sumEven % 4 == 0 || sumOdd % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}