#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

		string x;
		cin >> x;
		sort(x.begin(), x.end());
		//cout << x << endl;
		x.erase(unique(x.begin(), x.end()),x.end());
		if (x.length() % 2 == 0)cout << "CHAT WITH HER!" << endl;
		else cout << "IGNORE HIM!"<<endl;
	
	return 0;
}