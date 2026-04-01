#include<iostream>
using namespace std;
int main() {
	int a;
	int sum = 0;
	while(cin >> a){
	  sum += a;

	  if(sum<0)
	     break;

	   cout << a << endl;	 
	}
	return 0;
}