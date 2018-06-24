/*
 * ABC_C_Minimization.cpp
 *
 *  Created on: 2018/06/23
 *      Author: PCÅ[USER
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int cnt = 0;
	int j = 0;
	int jj = 0;
	while (1) {
		cnt++;
		for (int i = j; i < k - 1 + j; i++) {
			if (j + k - 1 >= n - 1) {
				std::cout << cnt << std::endl;
				return 0;
			}
			jj = i + 1;
		}
		std::cout << j << std::endl;
		j = jj;
	}
}

