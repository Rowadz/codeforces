#include<iostream>
using namespace std;
int main() {
	//while (true)
	//{
		int k, l, m, n, d;
		//Every k-th dragon got punched in the face with a frying pan.
		//Every l-th dragon got his tail shut into the balcony door.
		//Every m-th dragon got his paws trampled with sharp heels.
		//she threatened every n-th dragon to call her mom
		//d total # of dragons
		cin >> k >> l >> m >> n >> d;
		int coutner = 0;
		for (int i = 1; i <= d; i++)
		{
			if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) coutner++;
		}
		cout << coutner << endl;
	//}
	return 0;
}