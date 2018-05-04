#include <iostream>
#include <string>
using namespace std;

int main()
{

		int n; //  number of games played.
		cin >> n;
		string x;
		cin >> x;
		int A = 0, B = 0;
		for (int i = 0; i < n; i++)
		{
			if (x[i] == 'A') A++;
			else B++;
		}
		if (A == B) cout << "Friendship" << endl;
		else if (A > B) cout << "Anton" << endl;
		else cout << "Danik" << endl;
		
	
	return 0;
}