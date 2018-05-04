#include <iostream>
#include <string>
using namespace std;
int main() {

		string x;
		cin >> x;
		string test = "hello";
		int counter = 0;
		for (int i = 0; i < x.length();i++)
		{
			if (x[i] == test[counter])
			{
				counter++;
			}
		}
		if (counter == test.length())cout << "YES" << endl;
		else cout << "NO" << endl;
	
	return 0;
}