#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{

		set<char> mySet;
		string x;
		getline(cin, x);
		for (int i = 0; i < x.size(); i++)
		{
			// ana tase kont nasi el space 
			if (x[i] != '{' && x[i] != '}' && x[i] != ',' && x[i] != ' ') mySet.insert(x[i]);
		}
		cout << mySet.size() << endl;
	
	return 0;
}