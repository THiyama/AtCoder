/*
 * ABC100_C_3or2.cpp
 *
 *  Created on: 2018/06/21
 *      Author: PC�[USER
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
 * ���l�@
 * 3�{�ɂ����2�Ŋ����񐔂����Ȃ��Ȃ�킯�ł͂Ȃ��B
 * ���������āA�^����ꂽ�����̑f�����Ɋ܂܂��2�̐��̘a�������ƂȂ�B*3or/2
 */
