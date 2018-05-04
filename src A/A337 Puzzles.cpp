#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
		vector <int> f;
		vector <int> small_num;
		int n, m, a, x = 0, c = 0;
		cin >> n >> m;
		for (int i = 1; i <= m; i++)
		{
			cin >> a;
			f.push_back(a);
		}
		sort(f.begin(), f.end());
		x = f[n - 1] - f[0];
		/*for (int i = 0; i < f.size(); i++)
		{
			cout << f[i] << " ";
		}
		cout << endl;
		*/
		for (int i = 1; i <= m - n; i++)
		{
			//cout << "i = " << i << endl;
			//cout << "f[" << i + n - 1 << "] - " << "f[" << i << "] = " << f[i + n - 1] - f[i] << endl;
			if (f[i + n - 1] - f[i] < x)
			{
				
				x = f[i + n - 1] - f[i];
			}
		}
		cout << x <<endl;
		//x = f[n - 1] - f[0];
		//c = f[m - 1] - f[m - n];
		//cout << x <<endl;
		//cout << c << endl;
		//cout << min(x, c) << endl;
}