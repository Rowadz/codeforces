#include <iostream>
#include <string>
using namespace std;
int main(){

		// If at time x a boy stands on the i-th position and a girl stands on the (i?+?1)-th position
		// Then at time x?+?1 the i-th position will have a girl and the (i?+?1)-th position will have a boy
		int n, t;
		cin >> n >> t;
		string queue;
		cin >> queue;
		while (t--)
		{
			for (int i = 0; i < n; i++)
			{
				if (queue[i + 1] == 'G' && queue[i] == 'B')
				{
					queue[i + 1] = 'B';
					queue[i] = 'G';
				    i++;
				}
			}
		} 
		cout << queue <<endl;
	
}