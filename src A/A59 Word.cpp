#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	//while (true)
	//{
		int uppercase_num = 0, lowercase_num = 0;
		bool FOUND_SOLUATION = false;
		string word;
		cin >> word;
		for (int i = 0; i < word.length(); i++)
		{
			if (isupper(word[i]))
			{
				uppercase_num++;
			}
			else
			{
				lowercase_num++;
			}
		}
		if (lowercase_num == uppercase_num) {
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			cout << word << endl;
		}
		else if ((lowercase_num > uppercase_num) && !FOUND_SOLUATION)
		{
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			cout << word << endl;
		}
		else if ((lowercase_num < uppercase_num ) && !FOUND_SOLUATION)
		{
			transform(word.begin(), word.end(), word.begin(), ::toupper);
			cout << word << endl;
		}
	//}
	return 0;
}