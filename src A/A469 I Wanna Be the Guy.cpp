#include<iostream>
#include <vector>
#include <map>
using namespace std;
int main() {

		int n;
		cin >> n;
		vector <int> s(n + 1);
		int p,pp;
		cin >> p;
		s.at(0) = 1;
		for (int i = 0; i < p; i++)
		{
			cin >> pp;
			s.at(pp)++;
		}
		int q, qq;
		cin >> q;
		for (int i = 0; i < q; i++)
		{
			cin >> qq;
			s.at(qq)++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] <= 0) {
				cout << "Oh, my keyboard!" <<endl;
				return 0;
			}
		}
		cout << "I become the guy." << endl;
		
	
	return 0;
}