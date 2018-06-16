/*
 * ABC086A_Product.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PCーUSER
 */

//シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と b の積が偶数か奇数か判定してください。

#include <iostream>

int main() {
	int a,b;
	int ab;
	std::cin >> a >> b;
	ab = a*b;
	if (ab % 2 == 1)
		std::cout << "Odd" << std::endl;
	else
		std::cout << "Even" << std::endl;
	return 0;
}



