#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n, m; cin >> n >> m;
	multiset<int> price;
	for(int i = 0; i < n; i++) {
		int val; cin >> val;
		price.insert(val);
	}
	for(int i = 0; i < m; i++) {
		int demand; cin >> demand;
		auto itr = price.upper_bound(demand);
		if(itr != price.begin()) {
			itr--;
			cout << *itr << endl;
			price.erase(itr);
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}