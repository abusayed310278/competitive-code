#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; string s; cin >> n >> s;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		if (s == "Dee" and n == 1 and v[0] % 2 == 0)
		{
			cout << "Dee\n";
		} else {
			cout << "Dum\n";
		}
	}

	return 0;
}