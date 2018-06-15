#include <iostream>
using namespace std;

int main() {
	int k, r, counter = 0, holder = 0, holder2 = 0;
	cin >> k >> r;
	for(int i = 1; i < 1000; i++){
		holder = (k * i) % 10;
		holder2 = holder / r;
		if(holder == 0) {
			counter = i;
			break;
		}else if(holder2 ==  1 &&  holder2 * r == holder){
			counter = i;
			break;
		}
	}
	cout << counter  << endl;
	return 0;
}