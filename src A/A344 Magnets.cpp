#include <iostream>
#include <string>
using namespace std;
int main() {
	//while (true)
	//{
		int n;
		cin >> n;
		string m;
		int counter = 1;
		string v;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			if(i != 0)
				if (m != v) 
					counter++; 
			v = m;
			
		}
		cout << counter << endl;
	//}
	return 0;
}