//@author: zrpllvv
//link: https://stepik.org/lesson/374839/step/5?unit=362573
#include<bits/stdc++.h>

using namespace std;

inline bool isPrime(int a){
    if(a == 1) return 0;
    for(int i = 2; i*i <= a; i++) if(a % i == 0) return 0;
    return 1;
}

int main(){

    int n;
    vector<int> dou;
    cin >> n;

    for(int i = 1; i*i <= n; i++) if(n % i == 0) {
            if(isPrime(i))cout<<i<<' ';
            if(i*i != n) dou.push_back(n / i);
    }

    for(int i = dou.size()-1; i >= 0; i--) if(isPrime(dou[i])) cout<< dou[i]<<' ';
}
