#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    
    cout << "Enter rate of interest (per annum): ";
    cin >> rate;
    
    cout << "Enter time period (in years): ";
    cin >> time;
    
   
    interest = (principal * rate * time) / 100;
    
    cout << "\nSimple Interest: " << interest << endl;
    cout << "Total Amount: " << (principal + interest) << endl;
    
    return 0;
}
//calculate simple interest and total amount