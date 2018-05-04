#include <iostream>
#include <string>
using namespace std;

int main() {
	
		// string s; length n
		// numbers p,?q.
		// Split the string s to pieces of length p and q.
		int n, p, q;
		string s;
		cin >> n >> p >> q;
		cin >> s;
		int how_many_strings_of_p = -1;
		int how_many_strings_of_q = -1;
		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= n; j++)
				if ((i * p + j * q) == n) {
					how_many_strings_of_p = i;
					how_many_strings_of_q = j;
				}
	
		if (how_many_strings_of_p == -1) cout << -1;
		else {
			cout << how_many_strings_of_p + how_many_strings_of_q << endl;

			int j = 0;
			while (how_many_strings_of_p--)
			{
				for (int i = 0; i < p; i++)
				{
					cout << s[j];
					j++;
				}
				cout << endl;
			}
			while (how_many_strings_of_q--)
			{
				for (int i = 0; i < q; i++)
				{
					cout << s[j];
					j++;
				}
				cout << endl;
			}
		
	}

	return 0;
}