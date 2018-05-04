#include <iostream>
#include<string>
using namespace std;


int main() {

		long long int a;
		cin >> a;
		int i = a % 10;
		if (i > 5)
			cout << a + (10 - i);
		else
			cout << a - i;

		
	
	return 0;
}