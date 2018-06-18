/*
 * ABC088B_CardGameforTwo.cpp
 *
 *  Created on: 2018/06/17
 *      Author: PCーUSER
 */

//N 枚のカードがあります. i 枚目のカードには, a_i という数が書かれています.
//Alice と Bob は, これらのカードを使ってゲームを行います. ゲームでは, Alice と Bob が交互に 1 枚ずつカードを取っていきます. Alice が先にカードを取ります.
//2 人がすべてのカードを取ったときゲームは終了し, 取ったカードの数の合計がその人の得点になります. 2 人とも自分の得点を最大化するように最適な戦略を取った時, Alice は Bob より何点多く取るか求めてください.
/*
 制約
 N は 1 以上 100 以下の整数
 ai (1≤i≤N) は 1 以上 100 以下の整数

 入力
 入力は以下の形式で標準入力から与えられる.

 N
 a_1 a_2 a_3 … a_N
 出力
 両者が最適な戦略を取った時, Alice は Bob より何点多く取るかを出力してください.
 */

#include <iostream>
#include <cmath>

void sort_max(int *, int n);

int main() {
	int sum = 0;
	int a[100] = { 0 };

	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i - 1];
	}

	sort_max(a, n);

	for (int i = 0; i <= n - 1; i++) {
		sum = sum + std::pow(-1,i) * a[i];
	}

	std::cout << sum << std::endl;

	return 0;
}

void sort_max(int *array, int n) {
	int tmp = 1;
	for (int j = 0; j <= n - 1 - 1; j++) {
		for (int i = 0; i <= n - 1 - 1; i++) {
			if (array[i] <= array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
}
