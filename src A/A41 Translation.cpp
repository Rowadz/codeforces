#include <iostream>
#include <string>
using namespace std;
int main() {


		string s, t;
		cin >> s >> t;
		reverse(t.begin(),t.end());
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] != t[i]) {
				cout << "NO" << endl;
				return 0;
			}
		}
		cout << "YES" << endl;
	
	return 0;
}