/*
 * ABC081B_Shift_only.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PC�[USER
 */

/*
���� N �̐��̐��� A1,�c,AN ��������Ă��܂��D

���ʂ��N�́C���ɏ�����Ă��鐮�������ׂċ����ł���Ƃ��C���̑�����s�����Ƃ��ł��܂��D

���ɏ�����Ă��鐮�����ׂĂ��C2 �Ŋ��������̂ɒu��������D
���ʂ��N�͍ő�ŉ��񑀍���s�����Ƃ��ł��邩�����߂Ă��������D
*/

#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int A[201]={0};
	for (int i=0; i < n; i++) {
		std::cin >> A[i];
	}
	int counter = 0;
	int flag = 0;
	while(1){
		for (int i=0; i < n; i++) {
			if(A[i]%2 == 1) flag = 1;
			A[i] = A[i]/2;
		}
		if (flag == 1) break;
		counter ++;
	}

	std::cout << counter << std::endl;

	return 0;
}


