#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		int a, b;
		pair<int, int>x[100000];
		// a -> price b -> quality
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			x[i] = make_pair(a, b);
		}
		sort(x, x + n);
		for (int i = 0; i < n - 1; i++)
		{
			if (x[i].second > x[i + 1].second && x[i].first < x[i + 1].first) {
				cout << "Happy Alex" <<endl;
				return 0;
			}
			
		}
		cout << "Poor Alex" << endl;
	//}
	
	return 0;
}