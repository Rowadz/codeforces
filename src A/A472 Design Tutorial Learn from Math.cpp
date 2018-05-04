 #include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		int x, y = 0, z = 0;
		cin >> x;
		if (x % 2 == 0) {
			y = x - 8;
			z = x - y;
		}
		else {
			y = x - 9;
			z = x - y;
		}
		cout << y << " " << z << endl;
	//}
}