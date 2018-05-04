#include <iostream>
#include <string>
using namespace std;
int main() {
		int n;
		cin >> n;
		string x_va;
		int x_coun = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x_va;
			int minus = x_va.find('-');	
			//int plus = x_va.find('+');
			//cout << "minus " << minus << endl;
			if (minus >= 0)
			{
				x_coun--;
			}
			else
			{
				x_coun++;
			}
			/*if (minus == 0) minus++;
			if (minus)
			{
				x_coun--;
			}
			if (plus == 0) plus++;
			else if(plus)
			{
				x_coun++;
			}*/
		}
	   cout << x_coun << endl;
		x_coun = 0;
		return 0;
	//system("PASUE");
}