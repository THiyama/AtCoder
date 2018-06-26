/*
 * ABC098A_AddSubMul.cpp
 *
 *  Created on: 2018/06/26
 *      Author: PCÅ[USER
 */

#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	int c;
	c = a + b;

	if (c < a - b) {
		c = a - b;
	}
	if (c < a * b) {
		c = a * b;
	}
	std::cout << c << std::endl;

	return 0;
}

