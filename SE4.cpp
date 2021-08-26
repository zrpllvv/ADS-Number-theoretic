//@author: zrpllvv
//link: https://stepik.org/lesson/374841/step/4?unit=362575
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

int maxf(int x){
  vector<int> arr;
  for(int i = 2; i <= sqrt(x); i++){
    while(x % i == 0){
      arr.push_back(i);
      x /= i;
    }
  }

  if(x != 1){
    arr.push_back(x);
  }

  return arr[arr.size() - 1];
}

int main(){
  int l, r;
  cin >> l >> r;
  for(int i = l; i <= r; i++){
    cout << maxf(i) << " ";
  }
  return 0;
}
