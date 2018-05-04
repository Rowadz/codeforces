#include <iostream>
#include <string>
using namespace std;
int main() {
		string numbers;
		cin >> numbers;
		//char threes[256],twos[256],ones[256];
		int one_c = 0, two_c = 0, three_c = 0;
		for (int i = 0; i < numbers.length(); i++)
		{
			switch (numbers[i])
			{
			case '1':
				one_c++;
				break;
			case '2':
				two_c++;
				break;
			case '3':
				three_c++;
				break;
			default:
				break;
			}
		}
		//int num = one_c + two_c + three_c;
		bool b = true;
		for (int i = 0; i < one_c; i++)
		{
			if (b)
			{
				cout << "1";
				b = false;
			}
			
			else cout << "+1";
		}
		for (int i = 0; i < two_c; i++)
		{
			if (b)
			{
				cout << "2";
				b = false;
			}

			else cout << "+2";
		}
		for (int i = 0; i < three_c; i++)
		{
			if (b)
			{
				cout << "3";
				b = false;
			}

			else cout << "+3";
		}
		return 0;
	//system("PASUE");
}