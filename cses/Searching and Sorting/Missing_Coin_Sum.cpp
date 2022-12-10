#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){

	int n; cin >> n; 
	ll possibleSumValue = 0;
	vector<ll> coins(n);
	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	sort(coins.begin(), coins.end());

	for(int i = 0; i < n; i++){
		if(coins[i] > possibleSumValue + 1) {
			break;
		}		
		possibleSumValue += coins[i];
	}
	cout << possibleSumValue + 1 << endl;
	return 0;
}