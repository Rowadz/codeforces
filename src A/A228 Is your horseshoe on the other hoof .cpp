#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{

		set<string> mySet;
		string x1, x2, x3, x4;
		cin >> x1 >> x2 >> x3 >> x4;
		vector<string> fuckthis;
		fuckthis.push_back(x1); fuckthis.push_back(x2); fuckthis.push_back(x3); fuckthis.push_back(x4);
		int counter = 0;
		bool is_in1 = false;
		for (int i = 0; i < 4; i++)
		{
			is_in1 = mySet.find(fuckthis[i]) != mySet.end();
			if (is_in1 == false) mySet.insert(fuckthis[i]);
			else counter++;
		}
		cout << counter << endl;
	
	
	return 0;
}