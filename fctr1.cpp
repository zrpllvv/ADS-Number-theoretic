//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/4?unit=362574
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
  long long x;
  cin >> x;
  vector<int> factors;

  for (int i = 2; i <= sqrt(x); i++) {
      while (x % i == 0) {
          factors.push_back(i);
          x /= i;
      }
  }

  if (x != 1) {
      factors.push_back(x);
  }
  vector<int> qvalues;
  for(int i = 0; i < factors.size(); i++){
    int sum3 = 0;
    for(int j = 0; j < factors.size(); j++){
      if(factors[i] == factors[j]){
        sum3++;
      }
    }
    qvalues.push_back(sum3);
  }

  for(int i = 1; i < qvalues.size(); i++){
      if(qvalues[i] > qvalues[0]){
        qvalues[0] = qvalues[i];
      }
    }
  cout << qvalues[0];
  return 0;
}
