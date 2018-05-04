#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		int group;
		int ans = 0;
		int threes = 0, twos = 0, ones = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> group;
			if (group == 4) 
			{
				ans++; 
				//cout << "Found four an++ " << endl;
			}
			else if (group == 3) threes++;
			else if (group == 2) twos++;
			else if (group == 1) ones++;
		}
		//cout << " Threes -> " << threes << "\n Twos -> " << twos << "\n ones -> " << ones << endl;
		int threes_num = threes;
		for (int i = 0; i < threes_num; i++)
		{
			if (ones > 0 && threes > 0) {
				ones--;
				threes--;
				ans++;
				//cout << "found three + one , ans++ " << endl;
			}
		}
		if (threes > 0)
		{
			//cout << "some threes are stil untiched!!" <<endl;
			ans += threes;
			threes = 0;
		}
		ans += twos / 2;
		twos =  twos % 2 ;
		//if (ones >= 2)
		//{
		//	ones -= 2;
		//	twos = 0;
		//	ans++;
		//	cout << "one two left and added two ones ans++" << endl;
		//}
		int ones_num = ones;
		int make_four_with_ones = 0;
		for (int i = 0; i < ones_num; i++)
		{
			if (twos == 1)
			{
				make_four_with_ones = 3;
				twos--;
			}
			else
			{
				make_four_with_ones++;
			}
			if (make_four_with_ones == 4) {
				make_four_with_ones = 0;
				//cout << "Found four ones so ans++ " << endl;
				ans++;
			}
			ones--;
		}
		if (make_four_with_ones > 0) {
			ans++;
		}
		if (twos == 1)
		{
			ans++;
			twos--;
		}
		//cout << " Threes -> " << threes << "\n Twos -> " << twos << "\n ones -> " << ones << endl;
		cout << ans <<endl;
	//}
	return 0;
}