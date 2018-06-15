#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int max_number = max(a, b);
	int min_number = min(a, b);
	int pre_result = max_number - min_number;
	cout << min_number << " " << pre_result / 2 << endl;
	return 0;
}