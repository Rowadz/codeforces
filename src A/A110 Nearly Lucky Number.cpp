#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		string n;
		cin >> n;
		int coutner = 0;
		for (int  i = 0; i < n.length(); i++)
		{
			if (n[i] == '4' || n[i] == '7')coutner++;
		}
		int x  = coutner /10;
		int xx = coutner / 100;
		if (coutner == 7 ||
			coutner == 4 || 
			x/4==1 || x/7 == 1 || xx/4 == 1 || xx/7 ==1 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	//}
	return 0;
}