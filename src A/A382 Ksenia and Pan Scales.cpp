#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		string x, t, left, right;
		cin >> x;
		cin >> t;
		int delimiter = x.find('|');
		left = x.substr(0, delimiter);
		right = x.substr(delimiter + 1);
		for (int i = 0; i < t.length(); i++)
		{
			if (left.length() <= right.length()) left += t[i];
			else right += t[i];
		}
		cout << (left.length() == right.length() ? left + "|" + right : "Impossible" )<< endl;
	//}
}