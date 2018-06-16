/*
 * ABC081B_Shift_only.cpp
 *
 *  Created on: 2018/06/16
 *      Author: PCーUSER
 */

/*
黒板に N 個の正の整数 A1,…,AN が書かれています．

すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．

黒板に書かれている整数すべてを，2 で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．
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


