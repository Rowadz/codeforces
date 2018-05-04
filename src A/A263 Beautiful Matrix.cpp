#include <iostream>
using namespace std;
int main() {

		int a[5][5];
		int x;
		int posi, posj;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> x;
				if (x == 1) {
					posi = i;
					posj = j;
				}
				a[i][j] = x;
			}
		}
		int z = abs(posi - 2) + abs(posj - 2);
		//cout << "POS i " << abs(posi  - 2)<< endl;
		//cout << "POS j " << abs(posj  - 2)<< endl;
		cout << z << endl;
	
	return 0;
}