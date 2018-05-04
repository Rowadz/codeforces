#include <iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int n, a, b;
		int minimum_possible_capacity_in_turn = 0;
		int minimum_possible_capacity = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			minimum_possible_capacity_in_turn -= a;
			minimum_possible_capacity_in_turn += b;
			if (minimum_possible_capacity < minimum_possible_capacity_in_turn)
			{
				minimum_possible_capacity = minimum_possible_capacity_in_turn;
			}
		}
		cout << minimum_possible_capacity << endl;
	//}
}