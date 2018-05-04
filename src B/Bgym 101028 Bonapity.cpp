#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	//while (true)
//	{
		int n;
		cin >> n;
		string x1, x2;
		vector <string> ans;
		for (int i = 0; i < n; i++)
		{
			cin >> x1 >> x2;
			transform(x1.begin(), x1.end(), x1.begin(), ::tolower);
			transform(x2.begin(), x2.end(), x2.begin(), ::tolower);
				if (x1.length() == x2.length()) {
					for (int j = 0; j < x1.length(); j++)
					{
						if (x1[j] != x2[j] && x1[j] == 'p' ) 
							x1[j] = 'b';
						else if (x1[j] != x2[j] && x1[j] == 'b')
							x1[j] = 'p';
						else if (x1[j] != x2[j] && x1[j] == 'e')
							x1[j] = 'i';
						else if (x1[j] != x2[j]  && x1[j] == 'i')
							x1[j] = 'e';
					}
				}
				if (x1 == x2) ans.push_back("Yes");
				else ans.push_back("No");
		}
		//cout << x1 << " " << x2 << endl;
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << endl;
		}
	//}
	return 0;
}