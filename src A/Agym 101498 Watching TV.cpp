#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	
		map <int, int> x;
		vector <int> real_ans;
		// first = frqeuncy    second = how many times
		string ch_name;
		int frq;
		//cout << "Enter test cases " << endl;
		int t;
		cin >> t;
		int q;
		for (int i = 0; i < t; i++)
		{
			//cout << "Enter test cases 'q' " << endl;
			cin >> q;
			
			for (int j = 0; j < q; j++)
			{
				cin >> ch_name >> frq;
				x[frq] += 1;
			}
			int m = 0;
			int ans;
			for (map<int, int>::iterator it = x.begin(); it != x.end(); it++)
			{
				if (m < it->second) {
					m = it->second;
					ans = it->first;
				}
				else if (m == it->second) {
					ans = min(ans, it->first);
				}
				
			}
			real_ans.push_back(ans);
			x.clear();
		}
		for (int i = 0; i < real_ans.size(); i++)
		{
			cout << real_ans[i] << endl;
		}
	
	return 0;
}