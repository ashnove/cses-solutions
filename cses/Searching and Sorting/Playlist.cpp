#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){

	int n; cin >> n;
	vector<int> songs(n);
	for(int i = 0; i < n; i++) {
		cin >> songs[i];
	}
	int maxSequence = 0;
	int first = 0, last = 0;
	map<int, int> count;
	while(last < n) {
		count[songs[last]]++;
		while(count[songs[last]] > 1) {
			count[songs[first]]--;
			first++;
		}
		maxSequence = max(maxSequence, last - first + 1);
		last++;
	}
	cout << maxSequence;
	return 0;
}