#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
	string x, xx;
		cin >> x;
		cin >> xx;
		transform(x.begin(), x.end(), x.begin(), ::tolower);
		transform(xx.begin(), xx.end(), xx.begin(), ::tolower);
		if (x < xx)
		{
			cout << "-1"<<endl;
		}
		else if(xx < x)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	//system("PASUE");
	return 0;
}