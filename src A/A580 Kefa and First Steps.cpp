#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

		int n;
		cin >> n;
		vector <int> a;
		int x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
		int c = 0, max = 0;
		vector <int> ab;
		for (int i = 0; i < a.size() - 1 ; i++)
		{
			if (a[i] <= a[i + 1]) {
				c++;
				//cout <<"c -> "  <<c << endl;
				if (c == n - 1) {
					cout << c + 1 << endl;
					
					return 0;
				}
			}
			else if (a[i] > a[i + 1]) {
				//cout << "vc -> "<< c << endl;
				ab.push_back( c + 1);
				c = 0;
			}
		}
		ab.push_back(c + 1);
		if (!ab.empty()) {
			sort(ab.begin(), ab.end());
			cout << ab[ab.size() - 1] << endl;
		}
		
	
	return 0;
}