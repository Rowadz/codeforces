#include <iostream>
#include <vector>
using namespace std;
int main() {
	//while (true)
	//{
		//4 - "ANSWER": when the home uniform color of the host team matches the guests' uniform, the host team puts on its guest uniform as well.
		//5 - Note that the order of the games does not affect this number.
		//6 - h ->  the colors of the team's home  
		//7 - a ->  the colors of the  team's guest uniforms
		vector <int> host_colors, guest_colors;
		int n, host_color, guest_color;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> host_color >> guest_color;
			host_colors.push_back(host_color);
			guest_colors.push_back(guest_color);
		}
		int answer = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (host_colors[i] == guest_colors[j])answer++;
			}
		}
		cout << answer << endl;
	//}
	return 0;
}