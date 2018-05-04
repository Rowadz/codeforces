#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
		string x;
		cin >> x;
		cout << char(toupper(x.at(0)));
		//transform(xx.begin(), xx.end(), xx.begin(), ::toupper);
		for (int i = 1; i < x.length() ; i++)
		{
			cout << x[i]; 
		}
		cout << endl;
	
	//system("PASUE");
		return 0;
}