#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int  main() {
	//while (true)
	//{
		int n, m;
		cin >> n >> m;
		vector <int> x;
		int f;
		for (int i = 0; i < n; i++)
		{
			cin >> f;
			x.push_back(f);
		}
		sort(x.begin(),x.end());
		reverse(x.begin(), x.end());
		int min = 0;
		int usb_value = 0;
		for (int i = 0; i < x.size(); i++)
		{
			if (usb_value >= m) { break; }
			else { 
				min++; 
				usb_value += x[i];
			}
		}
		cout << min << endl;
	//}
	return 0;
}