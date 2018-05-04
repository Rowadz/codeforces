#include <iostream>
using namespace std;
int main() {
		int n, k;
		cin >> n >> k;
		int a[256];
		int counter = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			//cout << a[i] << "<?>" << a[i+1]<< endl;
			if (a[i] != 0)
			{		//cout << "Inside" << endl;
				if (a[i] >= a[k - 1])
				{
					//cout << "Inside" << endl;
					counter++;
				}
			}
		}

		cout << counter << endl;
	
	//system("PAUSE");
	return 0;
}