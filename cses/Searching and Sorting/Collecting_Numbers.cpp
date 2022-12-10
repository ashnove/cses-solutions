#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){

	int n; cin >> n;
	vector<array<int, 2>> nums(n);
	for(int i = 0; i < n; i++) {
		cin >> nums[i][0];
		nums[i][1] = i;
	}
	sort(nums.begin(), nums.end());
	int rounds = 1;
	for(int i = 1; i < n; i++) {
		if(nums[i][1] < nums[i - 1][1]) {
			rounds++;
		}
	}
	cout << rounds << endl;
	return 0;
}