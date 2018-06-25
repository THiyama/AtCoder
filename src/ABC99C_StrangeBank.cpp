/*
 * ABC99_C_StrangeBank.cpp
 *
 *  Created on: 2018/06/23
 *      Author: PCーUSER
 */

#include <iostream>
#include <cmath>
#include <vector>

//DP法を用いて解いてみる。
//メイン参考サイト：https://qiita.com/drken/items/ace3142967c4f01d42e9#%E8%A7%A3%E6%B3%95-1-2-%E3%83%9C%E3%83%88%E3%83%A0%E3%82%A2%E3%83%83%E3%83%97%E3%81%AB%E3%83%AB%E3%83%BC%E3%83%97%E5%9B%9E%E3%81%99-dp

int main() {
	int n;
	for (int i = 0; i < n; i++) {
		std::cin >> n;
	}
	std::vector<int> dp;
	dp[0] = 0;
	for (int i = 1; i < 110000; i++) {
		dp[i] = n;
	}
	for (int i = 0; i < n; i++) {
		for (int pow = 1; i + pow <= n; pow *= 6) {
			dp[i + pow] = std::min(dp[i] + 1, dp[i + pow]);
		}
		for (int pow = 1; i + pow <= n; pow *= 9) {
			dp[i + pow] = std::min(dp[i] + 1, dp[i + pow]);
		}
	}

	std::cout << dp[n] << std::endl;

	return 0;
}

