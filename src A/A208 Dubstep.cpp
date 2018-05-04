#include <iostream>
#include <string>
using namespace std;
int main() {


		string dubstep;
		cin >> dubstep;
		string wub = "WUB";
		string result_with_spaces = dubstep;
		if (dubstep.length() >=3)
		{
			for (int i = 0; i < dubstep.length() - 2; i++)
			{
				if (wub[0] == dubstep[i] && wub[1] == dubstep[i + 1] && wub[2] == dubstep[i + 2])
				{
					//cout << "Found WUB from index " << i  << " To index "<< i + 2 << endl;
					for (int j = i; j <= i + 2; j++)
					{
						result_with_spaces[j] = ' ';
					}
				}
			}
			bool found_first_char = false; // to prevent printing space at the beginning
			for (int i = 0; i < result_with_spaces.size(); i++)
			{
				if (result_with_spaces[i] != ' ')
				{
					if (result_with_spaces[i - 1] == ' ' && found_first_char)
					{
						cout << " ";
					}
					else
					{

						found_first_char = true;
					}
					cout << result_with_spaces[i];
				}
			}
		}
		else
		{
			cout << dubstep << endl;
		}


	
}