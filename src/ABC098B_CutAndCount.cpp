/*
 * ABC098B_CutAndCount.cpp
 *
 *  Created on: 2018/06/26
 *      Author: PCÅ[USER
 */

#include <iostream>
#include <string>

int main() {
	int n;
	std::string s;
	std::cin >> n;
	std::cin >> s;

	std::string tmp;

	std::string a, b;
	int max = 0;
	for (int i = 0; i < n; i++) {
		tmp = "";
		a = s.substr(0, i + 1);
		b = s.substr(i + 1, n - 1);
		for (int j = 0; j < (int) a.size(); j++) {
			for (int k = 0; k < (int) b.size(); k++) {
				if (a.at(j) == b.at(k)
						&& tmp.find(b.at(k)) == std::string::npos) {
					tmp += a.at(j);
				}
			}
		}
		if (max < (int) tmp.size()) {
			max = (int) tmp.size();
		}
	}

	std::cout << max << std::endl;
	return 0;
}

