/*
 * ABC101_A_EatingSymbolsEasy.cpp
 *
 *  Created on: 2018/06/23
 *      Author: PCÅ[USER
 */

#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	int a = 0;

	for (int i = 0; i <= 3; i++) {
		if (s.at(i) == '+') {
			a += 1;
		} else if (s.at(i) == '-') {
			a -= 1;
		}
	}

	std::cout << a << std::endl;

	return 0;
}

