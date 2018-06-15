#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

		string a, b, c, ab;
		cin >> a >> b >> c;
		if (a.size() + b.size() < c.size()) cout << "NO" << endl;
		else {
			ab = b + a;
			sort(c.begin(), c.end());
			sort(ab.begin(), ab.end());
			if (ab == c) cout << "YES" << endl;
			else cout << "NO" << endl;
		}

	
	return 0;
}