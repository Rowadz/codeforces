#include <iostream>
using namespace std;
char x[4][4];
bool t(int i, int j) {
	if (i == 3  || j == 3) return false;
	// check if 2 * 2 is the same
	else return x[i][j] == x[i][j + 1] && x[i][j] == x[i + 1][j] && x[i][j] == x[i + 1][j + 1];
}
bool tt() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (t(i, j)) return true;
		}
	}
	return false;
}

int main() {
	//while (true)
	//{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				cin >> x[i][j];

		bool w = tt();
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				char k = x[i][j];
				if (x[i][j] == '#') x[i][j] = '.';
				else x[i][j] = '#';
				if (tt())
					w = true;
				x[i][j] = k;
			}
		}
		if (w) cout << "YES" << endl;
		else cout << "NO" << endl;
	//}
	return 0;
}