/*
 * ABC086A_Product.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PC�[USER
 */

//�V�J��AtCoDeer����͓�̐����� a,b �������܂����B a �� b �̐ς�������������肵�Ă��������B

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



