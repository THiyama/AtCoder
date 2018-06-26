/*
 * ABC99_B_StoneMonument.cpp
 *
 *  Created on: 2018/06/23
 *      Author: PCÅ[USER
 */

#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	int diff = b - a;
	int c = 0;
	for (int i = 1; i < diff; i++) {
		c += i;
	}
	std::cout << c - a << std::endl;
	return 0;
}

