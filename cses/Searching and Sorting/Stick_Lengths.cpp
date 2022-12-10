#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n; 
	cin >> n;
	vector<ll> stickLengths(n);
	for(int i = 0; i < n; i++) {
		cin >> stickLengths[i];
	}
	sort(stickLengths.begin(), stickLengths.end());
	ll minTotalCost = 0;
	for(ll i = 0; i < n; i++) {
		minTotalCost += abs(stickLengths[n >> 1] - stickLengths[i]);
	}
	cout << minTotalCost << endl;
	return 0;
}