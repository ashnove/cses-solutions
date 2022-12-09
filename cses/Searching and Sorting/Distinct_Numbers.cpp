#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){

	int n; cin >> n;
	vector<int> nums(n);
	for(int i = 0; i < n; i++) cin >> nums[i];
    	sort(nums.begin(), nums.end());
	int ans = n;
	for(int i = 1; i < n; i++){
		ans -= nums[i] == nums[i - 1];
	}
	cout << ans << endl;
	return 0;
}