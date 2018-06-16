/*
 * ABC087B_Coins.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PCーUSER
 */

/*
 あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。 これらの硬貨の中から何枚かを選び、合計金額をちょうど X 円にする方法は何通りありますか。

 同じ種類の硬貨どうしは区別できません。2 通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。

 制約
 0≤A,B,C≤50
 A+B+C≥1
 50≤X≤20,000
 A,B,C は整数である
 X は 50 の倍数である

 */

#include <iostream>

int main() {
	int coin_n[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		std::cin >> coin_n[i];
	}
	int x;
	std::cin >> x;

	int counter = 0;
	for (int i = 0; i <= coin_n[0]; i++) {
		for (int j = 0; j <= coin_n[1]; j++) {
			for (int k = 0; k <= coin_n[2]; k++) {
				if (500 * i + 100 * j + 50 * k == x)
					counter++;
			}
		}
	}
	std::cout << counter << std::endl;
	return 0;
}

