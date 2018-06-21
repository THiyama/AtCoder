/*
 * ABC101_B_Ringos_FavoriteNumbers.cpp
 *
 *  Created on: 2018/06/21
 *      Author: PCーUSER
 */

/*
 問題文
今日は, 記念すべき AtCoder Beginner Contest 100 が開催される. そのため, 高橋君はりんごさんに, ある整数をプレゼントしようと思った.
今日のコンテストは「AtCoder Beginner Contest 100」なので, りんごさんは 100 で ちょうどD 回割りきれる正の整数をプレゼントされると喜ぶ.
さて, りんごさんがプレゼントされると喜ぶような整数のうち N 番目に小さいものを求めなさい.
制約
D は0,1,2 のいずれかである
N は1 以上100 以下の整数
 */

#include <iostream>
#include <cmath>

int main () {
	unsigned long int n,d;
	unsigned long int answer;
	std::cin >> d >> n;
	if (n == 100) n = 101; //コーナーケース（ノーマルのアルゴリズムでは、処理出来ない部分）処理。N=100のとき、ちょうど割り切れるに反する。したがって、101にする。
	answer = n*std::pow(100,d);

	std::cout << answer << std::endl;
	return 0;
}


