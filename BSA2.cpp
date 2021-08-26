//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/6?unit=362576
//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/6?unit=362576
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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	bool right = true;

	double l = 0, r = 1e8;
	for(int t = 0; t < 100; t++){
		double m = (l + r) / 2;
		int s = 0;
		for(int i = 0; i < n; i++){
			s += (int)(a[i] / m);
		}

		if(s < k) r = m;
		else l = m;
		if(t == 99 && trunc(s) == 0)right = false;
	}

	if(right)cout << trunc(l);
	else cout << 0;

	return 0;
}
