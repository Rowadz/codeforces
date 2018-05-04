#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int charFreq[26];

int main() {
		int n;
		cin >> n;
		string s;
		cin >> s;
		if (s.size() > 26)
		{
			cout << "-1" <<endl;
			return 0;
		}
		
			for (int i = 0; i < s.size(); i++) charFreq[s[i] - 'a']++;
			int sum = 0;
			for (int i = 0; i < 26; i++) if (charFreq[i] > 0)sum += charFreq[i] - 1;
			cout << sum << endl;
		
	return 0;
}