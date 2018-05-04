#include<iostream>
#include<string>
using namespace std;
int main() {
	
	int n, k;
	string s;
	cin >> n >> k;
	cin >> s;
	string x = s;
	int counter = 0;
	bool z = false;
	//cout << x[0] << endl;
	if (x.size() > 2)
	{
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < x.size(); j++)
				if (x[i] == s[j])
					counter++;
			if (counter > k)
			{
				z = false;
				break;
			}
			else
				z = true;
			counter = 0;
		}
		if (z)
			cout << "YES" << endl;
		else
			cout << "NO";
	}
	else
	{
		if (x[0] != s[1] && k == 1)
			cout << "YES" << endl;
		else if (k == 2 && x[0] == s[1])
			cout << "YES" << endl;
		else if (k == 2 && x[0] != s[1])
			cout << "YES" << endl;
		else if(k > n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}