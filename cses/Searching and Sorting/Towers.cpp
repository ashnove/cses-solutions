#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n; cin >> n;
	vector<int> towers;
	for(int i = 0; i < n; i++) {
		int cube;
		cin >> cube;

		int position = upper_bound(towers.begin(), towers.end(), cube) - towers.begin();
		if(position < towers.size()) {
			towers[position] = cube;
		}
		else {
			towers.push_back(cube);
		}
	}
	cout << towers.size() << endl;
	return 0;
}