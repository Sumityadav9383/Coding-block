//Boston number 
#include <iostream>
using namespace std;
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int originalDigitSum = digitSum(n);
    int factorDigitSum = 0;
    int temp = n;
    bool isComposite = false;
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            isComposite = true;
            factorDigitSum += digitSum(i);
            temp = temp / i;
        }
    }
    if (temp > 1) {
        if (temp != n)  
            isComposite = true;
        factorDigitSum += digitSum(temp);
    }
    if (isComposite && originalDigitSum == factorDigitSum) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}