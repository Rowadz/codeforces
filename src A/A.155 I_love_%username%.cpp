#include <iostream>
using namespace std;

int main() {
	int n, point, amazing = 0;
	cin >> n >> point; // point here will take the first input
	int min = point, max = point;
	while(--n){
		cin >> point;
		if(point < min) {
			min = point;
			amazing++;
		}
		if(point > max){
			max = point;
			amazing++;
		}
	}
	cout << amazing <<endl;
	return 0;
}