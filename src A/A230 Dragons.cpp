#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// Kirito  -> s strength
	// n -> # of dragons 
	int s, n;
	cin >> s >> n;
	// x -> dragon strength
	// y -> bonus for defeating it
	vector<pair<int, int>> dragon;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		dragon.push_back (make_pair(x, y));
	}
	sort(dragon.begin(), dragon.end());
	for (int i = 0; i < dragon.size(); i++) {
		if (s > dragon[i].first) {
			s += dragon[i].second;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}