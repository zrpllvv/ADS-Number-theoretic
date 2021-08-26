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

  for(ll i = 2; i <= sqrt(n); i++){
    while(n % i == 0){
      arr.push_back(i);
      n /= i;
    }
  }

  if(n != 1){
    arr.push_back(n);
  }

  vector<ll> s;
  s.push_back(arr[0]);
  ll temp = arr[0];
  for(ll i = 1; i < arr.size(); i++){
    temp = arr[i - 1];
    if(arr[i] != temp){
      s.push_back(arr[i]);
    }
  }

  for(ll i = 0; i < s.size(); i++){
    ll sum = 0;
    for(ll j = 0; j < arr.size(); j++){
      if(s[i] == arr[j]){
        sum++;
      }
    }
    cout << s[i] << " " << sum << "\n";
  }
  return 0;
}
