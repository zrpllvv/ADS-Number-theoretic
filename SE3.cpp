//@author: zrpllvv
//link: https://stepik.org/lesson/374841/step/4?unit=362575
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

typedef long long ll;
using namespace std;

int minf(int n){
  vector<int> a;
  for(int i = 2; i <= sqrt(n); i++){
    while(n % i == 0){
      a.push_back(i);
      n /= i;
    }
  }

  if(n != 1){
    a.push_back(n);
  }

  return a[0];
}

int main(){
  ll l, r;
  cin >> l >> r;

  for(int i = l; i <= r; i++){
    cout << minf(i) << " ";
  }
  return 0;
}
