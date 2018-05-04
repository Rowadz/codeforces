#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

		int n;
		cin >> n;
		int original_vector[100009], cumulative_sum_vector[100009];
		original_vector[0] = 0;
		cumulative_sum_vector[0] = 0;
		int x;
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			original_vector[i] = x;
			cumulative_sum_vector[i] = cumulative_sum_vector[i - 1] + original_vector[i];
		}
		int counter = 0;
		for (int i = 1; i <= n - 1; i++)
			if (cumulative_sum_vector[i] == (cumulative_sum_vector[n] - cumulative_sum_vector[i])) counter++;
		cout << counter << endl;

		return 0;
}