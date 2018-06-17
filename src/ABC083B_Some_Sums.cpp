/*
 * ABC083B_Some_Sums.cpp
 *
 *  Created on: 2018/06/17
 *      Author: PCーUSER
 */

//1以上N以下の整数のうち、10進法での各桁の和がA以上B以下であるものの総和を求めてください。
//制約
//1≤N≤10^4
//1≤A≤B≤36
//入力はすべて整数である
#include <iostream>
#include <cmath>

int main() {
	int n, a, b;
	int ten = 0;
	int digit[5] = { 0 };
	int sum[2] = {0};
	int value = 0;
	std::cin >> n >> a >> b;

	for (int i = 1; i <= n; i++) {
		value = i;
		sum[0] = 0;
		for (int j = 0; j <= 4; j++) {
			ten = std::pow(10 , (4 - j));
			digit[j] = value / ten;
			sum[0] += digit[j];
			value = value % ten;
		}
		if (a <= sum[0] && sum[0] <= b){
			sum[1] += i;
		}
	}

	std::cout << sum[1] << std::endl;

	return 0;
}

