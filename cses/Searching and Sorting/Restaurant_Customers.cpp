#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n; cin >> n;
	map<int, int> customers;
	for(int i = 0; i < n; i++) {
		int startTime, endTime; 
		cin >> startTime >> endTime;
		customers[startTime]++;
		customers[endTime + 1]--;
	}
	int customersAtAnyTime = 0;
	int maxCustomersAtAnyMoment = 0;
	for(auto customer : customers) {
		customersAtAnyTime += customer.second;
		maxCustomersAtAnyMoment = max(maxCustomersAtAnyMoment, customersAtAnyTime);
	}
	cout << maxCustomersAtAnyMoment << endl;
	return 0;
}