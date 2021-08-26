//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/4?unit=362574
#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;
using namespace std;

int main(){
  ll n;
  cin >> n;
  vector<ll> arr;

  for(ll i = 2ll; i <= sqrt(n); i++){
    while(n % i == 0){
      arr.push_back(i);
      n /= i;
    }
  }

  if(n != 1){
    arr.push_back(n);
  }

  int sum = 0;

  for(ll i = arr.size() - 1; i >= 0; i--){
    if(arr[i] == arr[arr.size() - 1]){
      sum++;
    }
  }

  cout << sum;
  return 0;
}
