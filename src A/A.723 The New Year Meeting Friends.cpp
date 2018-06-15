#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int point;
	vector<int> points = vector<int>();
	for(int i = 0; i < 3; i++){
		cin >> point;
		points.push_back(point);
	}
	sort(points.begin(), points.end());
	cout << points[2] - points[1] + points[1] - points[0] <<endl;
	return 0;
}