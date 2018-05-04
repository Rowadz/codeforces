#include <iostream>
#include <string>
using namespace std;
int main() {
		string x;
		cin >> x;
		bool z = false;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'H' || x[i] == 'Q' || x[i] == '9' ) {
				cout << "YES" << endl;
				return 0;
				
			}
		}
		cout << "NO" << endl;
	
	return 0;
}