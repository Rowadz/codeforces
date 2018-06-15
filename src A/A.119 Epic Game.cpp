#include <iostream>
using namespace std;

int gcd(int playerNumber, int n){
     int result = 0;
     if(n == 0) return playerNumber;
     for(int i = 1; i <= n; i++){
     	if((playerNumber % i == 0) && (n % i == 0)) result = i;
     }
     return result;
     
}

int main() {
      int a, b, n, holder, turn = 0;
      cin >> a >> b >> n;
      int x = n;
      for(int i = 0; i <= x; i++){
      	if(turn == 0){
      		if(!(gcd(a, n) <= n)){
      			cout << "1" << endl;
      			return 0;
      		}
      		n -= gcd(a, n);
      		turn++;
      	}else{
      		if(!(gcd(b ,n) <= n)){
      			cout << "0" << endl;
      			return 0;
      			
      		}
      		n -= gcd(b, n);
      		turn--;
      	}
      }
      return 0;
}