#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n == 1) cout << "I hate it" << endl;
	else {
		cout << "I ";
		int IhateThatILoveThatIHate = 1;
		for(int i = n; i > 0; i--){
			if(IhateThatILoveThatIHate & 1 == 1){
				cout << "hate ";
				IhateThatILoveThatIHate++;	
			}
			else {cout << "love ";IhateThatILoveThatIHate++;}
			if(i != 1) cout <<"that I ";
			else cout << "it" << endl;
		}
	}
	return 0;
}