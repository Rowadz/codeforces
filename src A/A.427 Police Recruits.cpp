#include <iostream>
using namespace std;

int main() {
	int n, policeRecruits = 0, ni, result = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ni;
		if(ni == -1 && policeRecruits > 0){
			policeRecruits--;
		}else if(ni >= 1){
			policeRecruits += ni;
		}else result++;
	}
	cout << result << endl;
	return 0;
}