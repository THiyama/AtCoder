/*
 * ABC101_B_DigitSums.cpp
 *
 *  Created on: 2018/06/23
 *      Author: PCÅ[USER
 */

#include <iostream>
#include <cmath>

int main() {
	int n, tmp_n = 0, tmp_nn  = 0;
	std::cin >> n;
	int a = 0;

	tmp_nn = n;
	for (int i = 9; i >= 0; i--) {
		a = std::pow(10, i);
		tmp_n += tmp_nn / a;
		tmp_nn %= a;

	}
	if (!(n % tmp_n)){
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
	return 0;
}
