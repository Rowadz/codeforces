#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		// a -> Limak 
		// b -> bob
		int a, b, year = 0;
		cin >> a >> b;
		while (a <= b)
		{
			a *= 3;
			b *= 2;
			//cout << a << " " << b << endl;
 			year++;
		}
		cout << year << endl;
	//}
	return 0;
}