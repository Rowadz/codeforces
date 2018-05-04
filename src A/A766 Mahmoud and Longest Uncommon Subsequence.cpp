#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		string a, b;
		cin >> a >> b;
		if (a == b) {
			cout << -1 << endl;
		}
		else if (a.length() > b.length())
		{
			cout << a.length();
		}
		else cout << b.length();
	//}
	return 0;
}