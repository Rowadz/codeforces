#include <iostream>
using namespace std;


bool lucky_number(int islucky) {
	while (islucky != 0) {
		// all lucky numbers will have a reminder of 4 or 7 if you molude them with 10
		if (islucky % 10 != 4 && islucky % 10 != 7)
		{
			return false;
		}
		islucky /= 10;
	}
	return true;
}
bool almost_lucky(int al_lucky) {
	// if the number already luck return true
	if (lucky_number(al_lucky))
	{
		return true;
	}
	// we need to find a lucky number that we can divied it on the givin number
	else
	{
		for (int i = 1; i < al_lucky; i++)
		{
			if ( al_lucky % i == 0  && lucky_number(i))
			{
				return true;
			}
		}
		return false;
	}
}
int main() {

		// lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7
		//  For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
		// almost lucky --> if it could be evenly divided by some lucky number
		int n;
		cin >> n;
		if (almost_lucky(n))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	
}