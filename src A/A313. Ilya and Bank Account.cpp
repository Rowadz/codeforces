#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n, result1, result2;
	cin >> n;
	if(n < 0){
	   result1 = n / 10;
	   result2 = n/100;
	   result2 = result2 *  10 + (n%10) ;
	   if(result2 == 0) cout << result2;
	   else if(result1 == 0) cout << result1;
	   else{
	   	// cout << "n = " << n << endl;
		// cout << "result1 = " << result1 << " result 2 = " << result2 << endl;
		cout << (( result1 < result2 ) ? result2 : result1);
	   }
	}else cout << n;
	cout << endl;
	return 0;
}