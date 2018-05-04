#include <iostream>
#include <vector>
using namespace std;
int main() {
	//while (true)
	//{
		long long n, k;
		cin >> n >> k;
		long long x = n / 2;
		if (n % 2 != 0) x++;
		if (k <= x)
		{
			cout << ((k - 1) * 2) + 1 << endl;
		}
		else
		{
			cout << (k - x) * 2 <<endl;
		}
	//}
	return 0;
}