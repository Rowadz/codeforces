#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		string x, z;
		cin >> x >> z;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] != z[i]) x[i] = '1';
			else x[i] = '0';
		}
		cout << x << endl;
	//}
	return 0;
}