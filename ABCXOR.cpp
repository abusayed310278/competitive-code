#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

int power(int x) {

	int res = 0;
	for (int i = 0; i < x; i++) {

		res += (1 << i);

	}

	return res + 1;

}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		int m = power(n);

		cout << (m - 1)*(m - 2) << endl;
	}


	return 0;
}