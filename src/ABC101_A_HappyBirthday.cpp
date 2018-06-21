/*
 * ABC101_A_HappyBirthday.cpp
 *
 *  Created on: 2018/06/20
 *      Author: PCÅ[USER
 */

#include <iostream>

int main () {
	int a,b;
	std::cin >> a >> b;
	if (a > 8 || b > 8) {
		std::cout << ":(" << std::endl;
	} else {

		std::cout << "Yay!" << std::endl;
	}
	return 0;
}



