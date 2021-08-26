//@author: zrpllvv
//link: https://stepik.org/lesson/374842/step/3?unit=362576
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

typedef long long ll;
using namespace std;

ll gcd(ll x, ll y){
  ll temp;
  while(y != 0){
    temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}

int main(){
  ll a, b;
  cin >> a >> b;
  cout << gcd(a, b);
  return 0;
}
