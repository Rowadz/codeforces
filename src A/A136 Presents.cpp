#include <iostream>
#include <vector>
using namespace std;
int main() {
		int n;
		cin >> n;
		int z;
		vector <int> x(n);
		for (int i = 0; i < n; i++)
		{
			cin >> z;
			x[z - 1] = i + 1;
		}
		for (int i = 0; i < x.size(); i++)
		{
			cout << x[i] << " ";
		}
		cout << endl;
}