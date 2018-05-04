#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {

		// which one of the given n numbers differs from the others. 
		// that one number usually differs from the others in evenness
		int n, a;
		cin >> n;
		int even = 0, odd = 0;
		vector<int> evenV;
		vector<int> oddV;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			if (a & 1) {
				odd++;
				oddV.push_back( i + 1);
			}
			else{
				evenV.push_back( i + 1);
				even++;
			}
			
		}
		if (even > odd) cout << oddV[0] << endl;
		else cout << evenV[0] << endl;
	
	
	return 0;
}