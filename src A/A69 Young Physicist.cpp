#include <iostream>
#include <vector>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		int x, y, z;
		int tx = 0, ty = 0, tz =0;
		for (int  i = 0; i < n; i++)
		{
			cin >> x >> y >> z;
			tx += x;
			ty += y;
			tz += z;
		}
		if (tx ==0 && ty == 0 && tz == 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	//}
	return 0;
}