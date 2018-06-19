/*
 * ABC085C_Otoshidama.cpp
 *
 *  Created on: 2018/06/18
 *      Author: PC�[USER
 */

/*
 ��蕶
 ���{�ł悭�g���鎆���́A
 10000
 �~�D�A
 5000
 �~�D�A
 1000
 �~�D�ł��B�ȉ��A�u���D�v�Ƃ͂����݂̂��w���܂��B

 �����񂪌����ɂ́A�ނ��c������󂯎�������N�ʑ܂ɂ͂��D��
 N
 �������Ă��āA���v��
 Y
 �~�����������ł����A�R��������܂���B���̂悤�ȏ󋵂����肤�邩���肵�A
 ���肤��ꍇ�͂��N�ʑ܂̒��g�̌���������Ă��������B
 �Ȃ��A�ނ̑c���͏\���T���ł���A���N�ʑ܂͏\���傫���������̂Ƃ��܂��B
 */

#include <iostream>

int main() {
	int n, w;
	int x = -1, y = -1, z = -1;

	int tmp_i = 0, tmp_j = 0;

	std::cin >> n >> w;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			tmp_i = i;
			tmp_j = j;
			if (5 * j == w / 1000 - 5 * n + 4 * i) {
				x = j;
				y = n - i - j;
				z = i;
				i = n;
				j = n;
				//std::cout << "x" << std::endl;
			} else if (4 * j == w / 1000 - n - 9 * i) {
				x = i;
				y = j;
				z = n - i - j;
				i = n;
				j = n;
				//std::cout << "y" << std::endl;
			} else if (9 * j == -w / 1000 + 10 * n - 5 * i) {
				x = n - i - j;
				y = i;
				z = j;
				i = n;
				j = n;
				//std::cout << "z" << std::endl;
			}
			if (x < 0 || y < 0 || z < 0) {
				x = -1;
				y = -1;
				z = -1;
				i = tmp_i;
				j = tmp_j;
			}
		}
	}

	std::cout << x << " " << y << " " << z << std::endl;

	return 0;
}
