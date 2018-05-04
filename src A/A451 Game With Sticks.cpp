#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main() {
	
		int n, m;
		cin >> n >> m;
		if (min(n, m) % 2 == 0) cout << "Malvika" << endl;
		else cout << "Akshat" << endl;
	
	return 0;
}