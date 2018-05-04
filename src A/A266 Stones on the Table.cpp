#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		char x; 
		char pre = ' ';
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			
			if (i >= 1)
			{
				if (pre == x) ans++;
			}
			pre = x;
		}
		cout << ans <<endl; 
	//}
	return 0;
}