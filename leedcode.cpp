1#include <iostream>
using namespace std;

int main() {
    int a, b, tem;

    cout << "enter two number:";
    cin >> a >> b;
    while (b!=0){
        tem = a % b; 
        a = b;
        b = tem;
    }
    cout << "Gcd" << a;
    return 0;
}