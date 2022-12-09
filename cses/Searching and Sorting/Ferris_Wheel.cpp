#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){

	int n, x; cin >> n >> x;
	vector<int> weights(n);
	for(int i = 0; i < n; i++) {
		cin >> weights[i];
	}
	sort(weights.begin(), weights.end());
	int first = 0, last = n - 1;
	int gondola = 0;
	while(first <= last) {
		if(first == last) {
			gondola++;
			break;
		}
		if(weights[first] + weights[last] <= x) {
			first++;
		}
		gondola++;
		last--;
	}
	cout << gondola << endl;
	return 0;
}