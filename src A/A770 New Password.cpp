#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		int n, k;
		cin >> n >> k;
		string s = "";
		for (int i = 0; i < n; i++)
		{
			s += char((int)'a'+ i % k);
		}
		cout << s << endl;
	//}
	return 0;
}