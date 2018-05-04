#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int t = n;
	int f = 5;
	int min = 0;
	for(int i = 0; i<n;i++){
		if(t == 0)break;
		else if (t < 0) {
			t+= f;
			min--;
			f--;
		}
		else {
			t -= f;
			min++;
		}
	}
	// if n = 5,4,3,2,1 this is on step !
	if(min == 0) cout << 1 <<endl;
	else cout << min <<endl;
	return 0;
}