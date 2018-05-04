#include <iostream>
#include <algorithm>
using namespace std;

int main() {

		// two arraies a & b;
		// For each element of the second array b you should find the number 
		// of elements in array a that are less than or equal to the value bj.
		int n, m;
		cin >> n >> m;
		int a[200001], b[200001];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		sort(a, a + n);
		for (int i = 0; i < m; i++)
		{
			int left = 0, right = n- 1, mid; 
			while (left <= right)
			{
				mid = (left + right) / 2;
				// this to find the last same number
				if (a[mid] <= b[i]) left = mid + 1;
				else right = mid - 1;
			}
			if (a[mid] <= b[i]) cout << mid + 1 << " ";
			else cout << mid << " ";
		}
	
	return 0;

}