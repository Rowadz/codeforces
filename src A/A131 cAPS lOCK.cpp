#include <iostream>
#include <string>
using namespace std;
int main() {



		string x;
		cin >> x;
		int i = 0;
		int co = 0;
		while (i <= x.length())
		{
			if (isupper(x[i])) co++;
			i++;
		}
		if (co == x.length()) {
			for (int k = 0; k < x.length(); k++)
			{
				cout << char(tolower(x[k]));
			}
			cout << endl;
		}
		else if (co == x.length() - 1 && islower(x[0])) {
			cout << char(toupper(x[0]));
			for (int i = 1; i < x.length(); i++)
			{
				cout << char(tolower(x[i]));
			}
			cout << endl;
		}
		else if (co >= 2) {
			cout << x << endl;
		}
		else if (isupper(x[0])) {
			cout << x << endl;
		}
		else
		{
			cout << x << endl;
		}
	
	return 0;
}