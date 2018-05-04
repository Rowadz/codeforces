#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int solArray [(int)(1e5  + 2)] , Cumulative_for_ans[(int)(1e5 + 2)];
int main() {

		string s;
		int m, l, r;
		cin >> s;
		cin >> m;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == s[i + 1]) {
				solArray[i] = 1;
			}
		}
		Cumulative_for_ans[0] = solArray[0];
		for (int i = 1; i <= s.size(); i++)
		{
			Cumulative_for_ans[i] = solArray[i] + Cumulative_for_ans[i - 1];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> l >> r;
			cout <<  Cumulative_for_ans[r - 2] - Cumulative_for_ans[l - 2] << endl;
		}
	
	return 0;
}