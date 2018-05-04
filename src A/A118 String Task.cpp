#include<iostream>
#include<string>
using namespace std;
int main() {

		string x;
		cin >> x;
		char xx[100];
		int c = 0;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] != 'A' &&
				x[i] != 'O' &&
				x[i] != 'Y' &&
				x[i] != 'E' &&
				x[i] != 'U' &&
				x[i] != 'I' &&
				x[i] != 'a' &&
				x[i] != 'o' &&
				x[i] != 'y' &&
				x[i] != 'e' &&
				x[i] != 'u' &&
				x[i] != 'i')
			{
				xx[c] = x[i];
				c++;
			}
		}
		for (int i = 0; i < c; i++)
		{
			if (xx[i] >= 'a' && xx[i] <= 'z')
			{
				cout << '.' << xx[i];
			}
			else
			{
				//cout << '.' << putchar(tolower(xx[i]));
				cout << '.' <<char(tolower(xx[i]));
				//cout << '.' << xx[i];
			}
			

		}
		cout << endl;
	
	//system("PAUSE");
		return 0;
}