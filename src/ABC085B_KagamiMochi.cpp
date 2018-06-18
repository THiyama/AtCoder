/*
 * ABC085B_KagamiMochi.cpp
 *
 *  Created on: 2018/06/17
 *      Author: PCーUSER
 */
/*
 * 問題文
 X 段重ねの鏡餅 (X≥1) とは、X 枚の円形の餅を縦に積み重ねたものであって、どの餅もその真下の餅より直径が小さい（一番下の餅を除く）もののことです。
 例えば、直径 10、8、6 センチメートルの餅をこの順に下から積み重ねると 3 段重ねの鏡餅になり、餅を一枚だけ置くと 1 段重ねの鏡餅になります。
 ダックスフンドのルンルンは N 枚の円形の餅を持っていて、そのうち i 枚目の餅の直径は di センチメートルです。これらの餅のうち一部または全部を使って鏡餅を作るとき、最大で何段重ねの鏡餅を作ることができるでしょうか。

 制約
 1≤N≤100
 1≤di≤100
 入力値はすべて整数である。
 入力
 入力は以下の形式で標準入力から与えられる。

 N
 d1
 :
 dN
 出力
 作ることのできる鏡餅の最大の段数を出力せよ。
 */

#include <iostream>

int check_duplication(int *, int);

int main() {
	int n;
	int d[100] = { 0 };

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		std::cin >> d[i - 1];
	}

	n = check_duplication(d, n);

	std::cout << n << std::endl;

	return 0;

}

int check_duplication(int* data, int n) {
	int d[100] = { 0 };
	int size=0;
	int counter=0;
	for (int j = 0; j <= n-1; j++) {
		for (int i = 0; i <= n-1; i++) {
			if(d[i] != data[j]) {
				counter++;
			}
		}
		if (counter == n) {
			d[j] = data[j];
			size ++;
		}
		counter=0;
	}
	return size;
}
