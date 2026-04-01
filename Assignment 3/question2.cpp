//Count Digits
#include <iostream>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;

	int  count=0;
	do{
		int digit = n%10;
		if(digit ==d)
		   count++;
		   n/=10;

	} while (n>0);
	cout<<count;
	return 0;
	
}