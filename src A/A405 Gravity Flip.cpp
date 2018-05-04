#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {


		// n is the # of columns
		int n, a;
		cin >> n;
		vector<int> cube;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			cube.push_back(a);
		}
		sort(cube.begin(), cube.end());
		for (int i = 0; i < cube.size(); i++)
		{
			cout << cube[i] << " ";
		}
		cout << endl;
	
	
	return 0;
}