//@author: zrpllvv
//link: https://stepik.org/lesson/374840/step/6?unit=362575
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)cin >> a[i];

  int m;
  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++)cin >> b[i];

  vector<int> ans;

  for(int i = 0; i < m; i++){
    int first = 0;
    int sum = 0;
    for(int j = 0; j < n; j++){
      if(b[i] == a[j]){
        if(sum == 0)first = j;
        sum++;
      }
    }
    if(sum > 0)ans.push_back(first + ((sum + 1) / 2));
    if(sum == 0)ans.push_back(0);
  }

  for(int i = 0; i < m; i++)cout << ans[i] << " ";
  return 0;
}
