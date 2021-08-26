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

inline bool good(double x, int y){
	if(x * x >= y) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	double l = 0, r = n + 1;

	for(int t = 0; t < 100; t++){
		double m = (l + r) / 2;
		if(good(m, n)) r = m;
		else l = m;
	}

	cout << trunc(r);
	return 0;
}
