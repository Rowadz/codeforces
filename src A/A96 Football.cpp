#include <iostream>
#include <string>
using namespace std;

int main()
{
	string players;
	cin >> players;
	int counter = 1;
	for (int i = 1; i < players.length(); i++)
	{
		if (players[i] == players[i - 1])
		{
			counter++;
			if (counter == 7)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
		else
		{
			counter = 1;
		}
	}

	cout << "NO" << endl;
	return 0;
	//system("PASUE");
}