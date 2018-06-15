#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float k;
	int n;
	cin >> n >> k;
	int minutes_to_solve = 0, counter = 0;
	for(int i = 1; i <= n; i++){
	    minutes_to_solve += i * 5;
	    if(!(minutes_to_solve + k > 240)){ // 240 hours in minutes
	    	counter++;
	    }else break;
	}
	cout << counter << endl;
	return 0;
}