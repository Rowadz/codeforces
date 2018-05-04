#include <iostream>
using namespace std;
int main() {

		int n, a, maxIndex = 0, minIndex = 0, min = 999999, max = -999999;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			if (a <= min) {
				minIndex = i + 1;
				min = a;
			}
			if (a > max){
				maxIndex = i + 1;
				max = a;
				// cout << a << " " << maxIndex << endl;
			}
			
		}
		//cout << minIndex << " " << maxIndex << endl;
		if (maxIndex == 1 && minIndex == n) cout << 0 << endl;
		else {
			int ans1 = 0, ans2 = 0;
			if (maxIndex < minIndex) {
				ans1 = maxIndex - 1;
				ans2 = n - minIndex;
			}
			else {
				ans1 = maxIndex - 1;
				minIndex++;
				ans2 = n - minIndex;
			}
			cout << ans1 + ans2 << endl;
		}
	
	return 0;
}