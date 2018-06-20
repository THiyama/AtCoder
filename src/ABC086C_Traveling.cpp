/*
 * ABC086C_Traveling.cpp
 *
 *  Created on: 2018/06/20
 *      Author: PC�[USER
 */

#include <iostream>
#include <cmath>

int main() {
	int n = 0;
	//�ړI�n�̌�����
	std::cin >> n;
	//�ړI�n�A���Ԓ�`
	int destination[n][2] = { 0 };
	int time[n] = {0};
	int diff_time[n] = {0};
	int manhattan_dis = 0;
	//���ԁA�ړI�n���́B���s�v��
	for (int i = 0; i < n; i++) {
		std::cin >> time[i] >> destination[i][0] >> destination[i][1];
	}
	//���ݍ��W�̒�`
	int now[2] = { 0 };
	for (int i = 0; i < n; i++) {
		//�}���n�b�^��������p����
		manhattan_dis = (int)std::abs((float)destination[i][0] - (float)now[0]) + (int)std::abs((float)destination[i][1] - (float)now[1]);
		//���ԍ����̌v�Z
		if(i >= 1) {
			diff_time[i] = std::abs((float)time[i - 1] - (float)time[i]);
		} else {
			diff_time[i] = time[i];
		}
		if (manhattan_dis > diff_time[i]) {
			std::cout << "No" << std::endl;
			return 0;
		} else if (manhattan_dis < diff_time[i]){
			if ((int)std::abs((float)manhattan_dis - (float)diff_time[i]) % 2) {
				std::cout << "No" << std::endl;
				return 0;
			}
		}
		now[0] = destination[i][0];
		now[1] = destination[i][1];
	}


	std::cout << "Yes" << std::endl;
	return 0;
}

