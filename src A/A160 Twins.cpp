#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	//while (true)
	//{
		int n, minimum_number_of_coins = 0, coin,total = 0;
		vector <int> a;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> coin;
			a.push_back(coin);
			total += coin;
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		int value_of_coins = a[0];
		minimum_number_of_coins++;
		a[0] = 0;
		int static_total = total;
		int coins_number = a.size();
		for (int i = 0; i < coins_number; i++)
		{
			if ((value_of_coins <= (static_total / 2)))
			{
				if(a[i] != 0)minimum_number_of_coins++;
				value_of_coins += a[i];
				total -= a[i];
			}
		}
		cout << minimum_number_of_coins << endl;
	//}
}