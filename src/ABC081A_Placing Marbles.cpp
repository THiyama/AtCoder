/*
 * ABC081A_Placing Marbles.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PC�[USER
 */

//���ʂ��N�� 1,2,3 �̔ԍ������� 3 �̃}�X����Ȃ�}�X�ڂ������Ă��܂��B �e�}�X�ɂ� 0 �� 1 ��������Ă���A�}�X i �ɂ� si ��������Ă��܂��B
//���ʂ��N�� 1 �������ꂽ�}�X�Ƀr�[�ʂ�u���܂��B �r�[�ʂ��u�����}�X���������邩���߂Ă��������B

#include <iostream>

int main (){
	int s[5] = {0};
	int w[3] = {100, 10, 1};
	std::cin >> s[0];
	for (int i = 1; i <= 3; i++) {
		s[i] = s[0] / w[i-1];
		s[0] = s[0] % w[i-1];
	}
	for (int i = 1; i <= 3; i++) {
		s[4] += s[i];
	}
	std::cout << s[4];
}
