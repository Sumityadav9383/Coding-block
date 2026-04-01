//Conversion(Any To Any)
#include <iostream>
using namespace std;

int main() {
    int sb, db;
    long long sn;
    cin >> sb >> db >> sn;
    long long decimalValue = 0;
    long long multiplier = 1;
    while (sn > 0) {
        decimalValue += (sn % 10) * multiplier;
        sn /= 10;
        multiplier *= sb;
    }
    long long result = 0;
    long long pos = 1;
    while (decimalValue > 0) {
        result += (decimalValue % db) * pos;
        decimalValue /= db;
        pos *= 10;
    }
    cout << result << endl;
    return 0;
}