#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, int> database;
	int n;
	cin >> n;
	string x;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(database.find(x) != database.end()) // means that the name is found 
		   cout << x << database[x] << endl;
		else cout << "OK" << endl;
		database[x]++;
	}
	return 0;
}