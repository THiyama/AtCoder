/*
 * ABC086C_Traveling.cpp
 *
 *  Created on: 2018/06/20
 *      Author: PCーUSER
 */

#include <iostream>
#include <cmath>

int main() {
	int n = 0;
	//目的地の個数入力
	std::cin >> n;
	//目的地、時間定義
	int destination[n][2] = { 0 };
	int time[n] = {0};
	int diff_time[n] = {0};
	int manhattan_dis = 0;
	//時間、目的地入力。旅行計画
	for (int i = 0; i < n; i++) {
		std::cin >> time[i] >> destination[i][0] >> destination[i][1];
	}
	//現在座標の定義
	int now[2] = { 0 };
	for (int i = 0; i < n; i++) {
		//マンハッタン距離を用いる
		manhattan_dis = (int)std::abs((float)destination[i][0] - (float)now[0]) + (int)std::abs((float)destination[i][1] - (float)now[1]);
		//時間差分の計算
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

