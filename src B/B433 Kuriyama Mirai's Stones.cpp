#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
long long v[(int)(1e5 + 2)], u[(int)(1e5 + 2)], CumulativeV[(int)(1e5 + 2)], CumulativeU[(int)(1e5 + 2)];

int main() {


		// m = questions
		// then type l r
		// type 1 -> Q1
		// type 2 -> Q2

		int n, m;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> v[i];
			u[i] = v[i];
		}
		sort(u + 1, u + n + 1);
		for (int i = 1; i <= n; i++)
		{
			CumulativeV[i] = CumulativeV[i - 1] + v[i];
			CumulativeU[i] = CumulativeU[i - 1] + u[i];
		}
		int option, l, r;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> option >> l >> r;
			if (option == 1) cout << CumulativeV[r] - CumulativeV[l - 1] << endl;
			else cout << CumulativeU[r] - CumulativeU[l - 1] << endl;
		}

	


		
	return 0;
}