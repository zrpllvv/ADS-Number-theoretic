//@author: zrpllvv
//link: https://stepik.org/lesson/374841/step/4?unit=362575
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long ll;
using namespace std;

int main(){
	ll	b, n;
  bool t = 0;
  cin >> b >> n; //Считать числа до этого

	ll arr[n + 1]; //Запрашиваем массив

	for (ll i = 0; i <= n; i++){ //Наполняем его числами для решета
		arr[i] = i;
  }

	//Проводим главный цикл. - Начало работы решета
	for (ll i = 2; i * i <= n; i++){
		if (arr[i]){
			//Если текущее число не равно 0 - начинаем от него искать сложные
			for (ll j = i * i; j <= n; j += i){
				//И обнуляем их ячейки, чтобы больше не проверять их в цикле
				arr[j] = 0;
      }
    }
	}
	// Решето окончило отсев - в массиве остались только простые

  //Выводим необнуленные - простые
	for (ll i = b; i <= n; i++){
		if (arr[i]){
      t = 1;
			cout << i << ' ';
		}
	}

  if(!t){
    cout << "empty";
  }
	return 0;
}
