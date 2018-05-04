#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		int p, q;
		// p people living
		// q the room can accommodate people
		int total = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> p >> q;
			if (abs(p - q) >=2) total++;
		}
		cout << total << endl;
	//}
	return 0;
}