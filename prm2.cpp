//@author: zrpllvv
//link: https://stepik.org/lesson/374839/step/5?unit=362573
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> arr;
    cin >> n;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
            if(i * i != n){
                arr.push_back(n / i);
            }
        }
    }
    for(int i = arr.size() - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
