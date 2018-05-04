#include <iostream>
using namespace std;
int main() {
//	while (true)
	//{
		int n;
		cin >> n;
		int f, ff;
		pair < int, int>x[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> f >> ff;
			x[i] = make_pair(f, ff);
		}
		bool rated = false;
		bool unrated = false;
		bool maybe = false;
		for (int i = 1; i <= n; i++)
		{
			if (x[i - 1].first != x[i - 1].second) {
				rated = true;
				break;
			}
			else if (x[i].first == x[i].second) {
				for (int j = i; j < n; j++)
				{
					if (x[j].first > x[j - 1].first)
					{
						unrated = true;
						break;
					}
					break;
				}
			
			}
		}
		if (rated)  cout << "rated" << endl; 
		else if (unrated) cout << "unrated" << endl;
		else cout << "maybe" << endl;
	//}
	return 0;
}