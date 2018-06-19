/*
 * ABC085C_Otoshidama.cpp
 *
 *  Created on: 2018/06/18
 *      Author: PCーUSER
 */

/*
 問題文
 日本でよく使われる紙幣は、
 10000
 円札、
 5000
 円札、
 1000
 円札です。以下、「お札」とはこれらのみを指します。

 青橋くんが言うには、彼が祖父から受け取ったお年玉袋にはお札が
 N
 枚入っていて、合計で
 Y
 円だったそうですが、嘘かもしれません。このような状況がありうるか判定し、
 ありうる場合はお年玉袋の中身の候補を一つ見つけてください。
 なお、彼の祖父は十分裕福であり、お年玉袋は十分大きかったものとします。
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
