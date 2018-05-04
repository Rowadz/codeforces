#include <iostream>
using namespace std;
 
int main() {
	//while (true)
	//{
		long long n, m, a;
		// size n?×?m meters.
		// Each flagstone is of the size a?×?a.
		cin >> n >> m >> a;
		long long x = n / a;
		long long y = m / a;
		if (n % a != 0)x++;
		if (m % a != 0)y++;
		cout << x * y << endl;
		
	//}

	return 0;
}