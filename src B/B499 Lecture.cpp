#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {

		int n,m;
		cin >> n >> m;
		string s1, s2;
		pair<string, string> w [3000];
		for (int i = 0; i < m; i++)
		{
			cin >> s1 >> s2;
			w[i] = make_pair(s1,s2);
		}
		vector <string> x;
		string z;
		for (int i = 0; i < n; i++)
		{
			cin >> z;
			x.push_back(z);
		}
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (x[i] == w[j].first || x[i] == w[j].second) {
					if (w[j].first.length() > w[j].second.length()) cout << w[j].second << " ";
					else cout << w[j].first << " ";
				}
			}
			
		}
	
	return 0;
}