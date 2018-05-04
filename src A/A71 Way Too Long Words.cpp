#include <iostream>
#include <string>
using namespace std;
int main() {
	string toolong[256];
	int n;
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		cin >> toolong[i];
	}
	for (int  i = 0; i < n; i++)
	{
		if (toolong[i].length() > 10)
		{
			string x = toolong[i];
			cout << x[0] << x.length() -2 <<x[x.length() - 1] << endl;
		}
		else
		{
			cout << toolong[i] << endl;
		}
	}
	//system("PAUSE");
	return 0;
}