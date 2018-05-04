#include <iostream>

using namespace std;
int main() {

		int y;
		cin >> y;
		int a = y / 1000;
		int b = y / 100 % 10;
		int c = y / 10 % 10;
		int d = y % 10;
		for (int i = 0; i < 9000; i++)
		{
			if (a != b && a != c && a != d && b != c && b != d && c != d && i != 0)
			{
				//cout << "Break..." << endl;
				//cout << a << " " << b << " " << c << " " << d << endl;
 				break;
			}
			else
			{
				y++;
			}
			a = y / 1000;
			b = y / 100 % 10;
			c = y / 10 % 10;
			d = y % 10;
		}
		cout << y << endl;
	
}