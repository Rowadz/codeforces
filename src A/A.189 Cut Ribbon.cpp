#include <iostream>


using namespace std;

int main() {
	int n, a, b, c, result = 0;
	cin >> n >> a >> b >> c;
	for(int i = 0; i <= n; i += a)
		for(int j = 0; j <= n; j += b){
			int k = (n - i - j)/c;
			if(k*c + i + j == n && k >= 0)
			   result = max(result, i/a + j/b + k);
		}

	cout << result << endl;
	return 0;
}