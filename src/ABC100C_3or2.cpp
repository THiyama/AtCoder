/*
 * ABC100_C_3or2.cpp
 *
 *  Created on: 2018/06/21
 *      Author: PCÅ[USER
 */

/*
 *
 */

#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int a[n];
	int counter = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		while(!(a[i] % 2)) {
			a[i] /= 2;
			counter++;
		}
	}
	std::cout << counter << std::endl;
	return 0;
}


/*
 * ñ‚ëËçlé@
 * 3î{Ç…ÇÊÇ¡Çƒ2Ç≈äÑÇÍÇÈâÒêîÇ™è≠Ç»Ç≠Ç»ÇÈÇÌÇØÇ≈ÇÕÇ»Ç¢ÅB
 * ÇµÇΩÇ™Ç¡ÇƒÅAó^Ç¶ÇÁÇÍÇΩêÆêîÇÃëfàˆêîÇ…ä‹Ç‹ÇÍÇÈ2ÇÃêîÇÃòaÇ™ìöÇ¶Ç∆Ç»ÇÈÅB*3or/2
 */
