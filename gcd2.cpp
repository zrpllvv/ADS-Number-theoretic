//@author: zrpllvv
//link: https://stepik.org/lesson/374842/step/3?unit=362576
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

ll gcd(ll a, ll b){
  if(b == 0){
    return a;
  }
  return gcd(b, a % b);
}

int main(){
  ll x, y;
  cin >> x >> y;
  cout << (x / gcd(x, y)) * y;
  return 0;
}
