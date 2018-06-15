#include <iostream>
using namespace std;
long long freq[(int)(1e5 + 3)], Summation[(int) (1e5 + 3)];
int main() {
    int n, a;
    long long counter;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> a;
    	freq[a]++;
    }
    Summation[0] = 0;
    Summation[1] = freq[1];
    for(int i = 2; i < 1e5 + 3; i++){
    	Summation[i] = max(Summation[i - 1], Summation[i - 2] + freq[i] * i);
    }
    cout << Summation[(int) (1e5  + 2)] <<endl;
    return 0;
}