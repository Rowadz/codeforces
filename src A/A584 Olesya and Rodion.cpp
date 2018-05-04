#include <iostream>
#include <math.h>
using namespace std;
int main() {
	//while (true)
	//{
	    long long n;
		int t;
		cin >> n >> t;
		long long Olesya = 0;
		/*for (int i = 0; i < n; i++)
		{
			Olesya += t * pow(10,i);
		}*/
		Olesya = t;
		if (n == 1 && t == 10) cout << -1 << endl;
		else
		{
			if(t == 10) cout << Olesya/10;
			else cout << Olesya;
			for (int i = 1; i < n; i++)
			{
				cout << 0;
			}
			cout << endl;
		}
		
	//}
	return 0;
}