#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int n, m;
		cin >> n >> m;
		bool isPrime[51] = {};
		isPrime[0] = isPrime[1] = false;
		int max = 51;
		for (int i = 2; i < max; i++)
		{
			if (i % 2 == 0)isPrime[i] == false;
			else isPrime[i] = true;
		}
		for (int i = 2; i*i < max; i++)
		{
			for (int j = i*i; j < max; j+=i)
			{
				isPrime[j] = false;
			}
		}
		int c = 0;
		for (int i = n+1; i < max; i++)
		{
			if (isPrime[i]) {
				c = i;
				break;
			}
		}
		if (c == m)cout << "YES" << endl;
		else cout << "NO" << endl;
		
	//}
	return 0;
}