/*
 * ABC081A_Placing Marbles.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PCーUSER
 */

//すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 各マスには 0 か 1 が書かれており、マス i には si が書かれています。
//すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。

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
