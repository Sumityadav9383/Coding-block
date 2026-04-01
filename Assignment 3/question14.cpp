//Print Armstrong Numbers#include <iostream>
#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        int num = i;
        int count = 0;
        int temp = num;
        while (temp > 0) {
            temp /= 10;
            count++;
		}
        long long sum = 0;
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            long long power = 1;
            for (int j = 0; j < count; j++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i) {
            cout << i << endl;
        }
    }
    return 0;
}