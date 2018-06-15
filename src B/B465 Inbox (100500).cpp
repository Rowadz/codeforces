#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> emails =  vector<int>(n);
	int unreadEmails = 0, email;
	for(int i = 0; i < n; i++){
		cin >> email;
		emails.push_back(email);
		if(email == 1) unreadEmails++;
	}
	int operations  = 0;
	for(int i = 0; i < emails.size() - 1; i++){
		if(emails[i] == 1) {
			unreadEmails--;
			if(unreadEmails > 0) {  // still in the list
				operations += 2;
				if(emails[i + 1] == 1){ // next	
					operations--;
				} 
			}else operations++;
		}
	}
	if(emails[emails.size() - 1] == 1) operations++;
	cout << operations <<endl;
	return 0;
}