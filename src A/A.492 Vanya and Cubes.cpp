#include <iostream>
using namespace std;

int main() {
	int n, result_per_iter = 0, height = 0, final_result = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		result_per_iter = i + result_per_iter;
		final_result += result_per_iter;
		height++;
		if(final_result > n) {
			height--;
			break;
		}
	}
	cout << height << endl;
	return 0;
}