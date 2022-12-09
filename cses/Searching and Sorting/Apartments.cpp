#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using lld = long double;

int main(){
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> desiredSize(n);
	vector<int> apartmentSize(m);
	for(int i = 0; i < n; i++) {
		cin >> desiredSize[i];
	}
	for(int i = 0; i < m; i++) {
		cin >> apartmentSize[i];
	}
	sort(desiredSize.begin(), desiredSize.end());
	sort(apartmentSize.begin(), apartmentSize.end());
	int applicant = 0, apartment = 0, allot = 0;
	while(applicant < n && apartment < m) {
		if(desiredSize[applicant] - k <= apartmentSize[apartment] && desiredSize[applicant] + k >= apartmentSize[apartment]){
			apartment++;
			applicant++;
			allot++;
		}
		else if(desiredSize[applicant] - k > apartmentSize[apartment]) {
			apartment++;
		}
		else if(desiredSize[applicant] + k < apartmentSize[apartment]) {
			applicant++;
		}
	}
	cout << allot << endl;
	return 0;
}