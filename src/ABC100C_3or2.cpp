/*
 * ABC100_C_3or2.cpp
 *
 *  Created on: 2018/06/21
 *      Author: PCーUSER
 */

/*
 *
 */

#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int a[n];
	int counter = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		while(!(a[i] % 2)) {
			a[i] /= 2;
			counter++;
		}
	}
	std::cout << counter << std::endl;
	return 0;
}


/*
 * 問題考察
 * 3倍によって2で割れる回数が少なくなるわけではない。
 * したがって、与えられた整数の素因数に含まれる2の数の和が答えとなる。*3or/2
 */
