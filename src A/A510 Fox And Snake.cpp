#include <iostream>
using namespace std;
int main() {
		// your code goes here
		int n, m;
		cin >> n >> m;
		int row = 1;
		//A snake is a pattern on a n by m 
		//The tail of the snake is located at (1,1)
		//then it's body extends to (1,m)
		//then goes down 2 rows to (3,m)
		//then goes left to (3,1) and so on.
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0)
			{
				for (int j = 0; j < m; j++) {
					cout << "#";
				}
				cout << "\n";
			}
			if (i % 2 == 0)
			{
				if (row == 1) {
					for (int k = 0; k < m - 1; k++)
					{
						cout << ".";
					}
					cout << "#\n";
					row = 2;
				}
				else
				{
					cout << "#";
					for (int z = 0; z < m - 1; z++)
					{
						cout << ".";
					}
					cout << "\n";
					row = 1;
				}
			}

		}
	
	return 0;
}