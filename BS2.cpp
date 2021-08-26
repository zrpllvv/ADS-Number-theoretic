//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/6?unit=362575
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

#pragma GCC optimize("unroll-loops")

typedef long long ll;

#define pb push_back
#define ssort(a) sort(a.begin(), a.end())
#define rreverse(a) reverse(a.begin(), a.end())
#define inf 1e9
#define inff 1e18

int binary(ll x, vector<ll> a1){
	ll l = 0, r = a1.size() - 1;
	while(r >= l){
		ll m = (r + l) / 2;
		if(a1[m] == x)return m;
		if(a1[m] > x) r = m - 1;
		if(a1[m] < x) l = m + 1;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n;
	cin >> n;
	vector<ll> a(n);
	for(ll i = 0; i < n; i++)cin >> a[i];

	int m;
	cin >> m;
	vector<ll> b(m);
	for(ll i = 0; i < m; i++)cin >> b[i];
	vector<ll> ans(m);

	for(ll i = 0; i < m; i++){
		ans[i] = binary(b[i], a) + 1;
	}

	for(auto now: ans)cout << now << " ";
	return 0;
}
