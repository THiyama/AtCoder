/*
 * ABC101_B_Ringos_FavoriteNumbers.cpp
 *
 *  Created on: 2018/06/21
 *      Author: PC�[USER
 */

/*
 ��蕶
������, �L�O���ׂ� AtCoder Beginner Contest 100 ���J�Â����. ���̂���, �����N�͂�񂲂����, ���鐮�����v���[���g���悤�Ǝv����.
�����̃R���e�X�g�́uAtCoder Beginner Contest 100�v�Ȃ̂�, ��񂲂���� 100 �� ���傤��D �񊄂肫��鐳�̐������v���[���g�����Ɗ��.
����, ��񂲂��񂪃v���[���g�����Ɗ�Ԃ悤�Ȑ����̂��� N �Ԗڂɏ��������̂����߂Ȃ���.
����
D ��0,1,2 �̂����ꂩ�ł���
N ��1 �ȏ�100 �ȉ��̐���
 */

#include <iostream>
#include <cmath>

int main () {
	unsigned long int n,d;
	unsigned long int answer;
	std::cin >> d >> n;
	if (n == 100) n = 101; //�R�[�i�[�P�[�X�i�m�[�}���̃A���S���Y���ł́A�����o���Ȃ������j�����BN=100�̂Ƃ��A���傤�Ǌ���؂��ɔ�����B���������āA101�ɂ���B
	answer = n*std::pow(100,d);

	std::cout << answer << std::endl;
	return 0;
}


