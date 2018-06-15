#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool flag = false;
	for(int i = 0; i < s.size() - 2; i++){
		if(s.size() < 3) {
			break;
		}
		if(s[i+1] != s[i] && s[i + 1] != s[i + 2] && s[i] != s[i + 2] && s[i] != '.' && s[i + 1] != '.' && s[i + 2] != '.'){
			cout << "Yes" << endl;
			flag = true;
			break;
		}
	}
	if(!flag) cout << "No" << endl;
	return 0;
}