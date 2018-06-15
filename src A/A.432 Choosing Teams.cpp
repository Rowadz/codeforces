#include <iostream>
using namespace std;

int main() {
	int team = 0, n, k, x;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x + k <= 5) team++;
	}
	cout << team/3 << endl;
	return 0;
}