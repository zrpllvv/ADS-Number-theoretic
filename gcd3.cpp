//@author: zrpllvv
//link: https://stepik.org/lesson/374842/step/3?unit=362576
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;

int dbd(ll n, ll k, ll y = 0){
    ll d, x, h;
    cin >> x;
    while(x != y){
        if(y == 0){
          break;
        }
        if( x > y){
          x = x - y;
        } else {
          y = y - x;
        }
    }
    d = x;
    k++;
    if(k != n){
      d = dbd(n, k, x);
    }

    return d;
}

int main(){
    ll h = 0, n, s;
    cin >> n;
    s = dbd(n, h);
    cout << s;
}
