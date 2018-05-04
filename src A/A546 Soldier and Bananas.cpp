#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		// k is the cost of the first banana.
		// k , 2k , 3k ,...... , wk
		// n initial number of dollars the soldier has.
		// w number of bananas he wants.
		int k, n, w;
		cin >> k >> n >> w;
		int total = 0;
		for (int  i = 1; i <= w; i++)
		{
			total += i * k;
		}
		if (total <= n) cout << 0 << endl;
		else cout << abs(total - n) << endl;
	//}
	return 0;
}