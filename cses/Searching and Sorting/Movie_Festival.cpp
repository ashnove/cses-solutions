#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n; cin >> n;
	vector<array<int, 2>> slots(n);
	for(int i = 0; i < n; i++) {
		cin >> slots[i][1] >> slots[i][0];
	}
	int movies = 0;
	int lastWatched = 0;
	sort(slots.begin(), slots.end());
	for(int i = 0; i < n; i++) {
		if(slots[i][1] >= lastWatched) {
			movies++;
			lastWatched = slots[i][0];
		}
	}
	cout << movies << endl;
	return 0;
}