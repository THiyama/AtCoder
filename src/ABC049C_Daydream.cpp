/*
 * ABC049C_Daydream.cpp
 *
 *  Created on: 2018/06/19
 *      Author: PC�[USER
 */

/*
 ��蕶
 �p����������Ȃ镶����
 S ���^�����܂��B
 T���󕶎���ł����Ԃ���n�߁A�ȉ��̑�����D���ȉ񐔌J��Ԃ����Ƃ�
 S=T
 �Ƃ��邱�Ƃ��ł��邩���肵�Ă��������B
 */

#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	std::string s[4] = { "dreamer", "dream", "eraser", "erase" };

	char c;
	std::string tmp_str;
	int tmp_size = 0;
	int size = 0;
	size = str.size();
	for (int i = size - 1; i >= 0; i--) {
		c = str.at(i);
		tmp_size++;
		tmp_str = c + tmp_str;
		for (int j = 0; j <= 3; j++) {
			if (tmp_str == s[j]) {
				tmp_str = "";
				tmp_size = 0;
			}
			if (tmp_size >= 7 && tmp_str != "") {
				std::cout << "NO" << std::endl;
				return 0;
			}
		}
	}
	tmp_size = 0;
	if (tmp_str != ""){
		std::cout << "NO" << std::endl;
		return 0;
	}
	std::cout << "YES" << std::endl;
	return 0;
}

