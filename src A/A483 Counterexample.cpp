#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{


		 long long l, r;
		cin >> l >> r;
		if (l % 2 != 0) l++;
		if (abs(l - r) < 2) cout << -1 << endl;
		else cout << l << " " << l + 1 << " " << l + 2 << endl;
	//}
	return 0;
}