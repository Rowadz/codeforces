#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		int n, m;
		cin >> n >> m;
		int  ans = n;
		int add = 0;
		for (int i = 1; i <= n; i++)
				if (i % m == 0) 
					n++;
		cout << n << endl;
	//}
	return 0;
}