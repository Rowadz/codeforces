#include <iostream>
using namespace std;
int main() {

		long long x;
		cin >> x;
		if (!cin.fail()) {
			if (x <= 127) cout << "byte" << endl;
			else if (x <= 32767) cout << "short" << endl;
			else if (x <= 2147483647) cout << "int" << endl;
			else   cout << "long" << endl;
		}
		else
		{
			cout << "BigInteger" << endl;
		}
	
	return 0;
}