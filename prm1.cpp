//@author: zrpllvv
//link: https://stepik.org/lesson/374839/step/5?unit=362573
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin >> n;
  int d = 1;
  while(d <= n){
    if(n % d == 0){
      cout << d << " ";
    }
    d++;
  }
  return 0;
}
