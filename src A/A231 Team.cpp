#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		int c1, c2, c3, pro = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> c1 >> c2 >> c3;
			if (c1 + c2 + c3 >= 2) pro++;
		}
		cout << pro << endl;
	//}
	return 0;
}