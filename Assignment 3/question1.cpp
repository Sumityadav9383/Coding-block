//Sum of odd placed and even placed digits
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int oddsum=0,evensum=0;
	int pos = 1;
	while (n>0){
		int digit=n%10;
		if ( pos%2==1)
		oddsum+=digit;
		else
		evensum+=digit;
		n/=10;
		pos++;
	}
	cout <<oddsum<<endl;
	cout <<evensum<<endl;
	return 0;
}