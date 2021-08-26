//@author: zrpllvv
//link: https://stepik.org/lesson/374842/step/3?unit=362576
#include<bits/stdc++.h>

using namespace std;

long long x, y, x2, y2;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){


    cin >> x >> y >> x2 >> y2;
    long long A = abs(x2 - x), B = abs(y2 - y);
    cout << gcd(A, B) + 1;



}
