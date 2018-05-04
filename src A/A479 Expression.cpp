#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

		vector <int> x;
		int a;
		for (int i = 0; i < 3; i++)
		{
			cin >> a;
			x.push_back(a);
		}
		//sort(x.begin(),x.end());
		int max = 0;
		max = x[0]+x[1]*x[2];
		for (int i = 0; i < 4; i++)
		{
			if (max < x[0] * (x[1] + x[2]))max = x[0] * (x[1] + x[2]);
			else if (max < x[0] * x[1] * x[2]) max = x[1] * x[0] * x[2];
			else if (max < (x[0] + x[1]) * x[2]) max = (x[0] + x[1]) * x[2];
			else if (max < x[0] + x[1] + x[2]) max = x[0] + x[1] + x[2];
		}
		cout << max << endl;
	
	return 0;
}