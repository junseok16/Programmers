/*
* @title    : 다음 큰 숫자(Lv. 2)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230503
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numOfOne(int n) {
    int ones = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            ++ones;
        }
        n /= 2;
    }
    return ones;
}

int solution(int n) {
    int nextNumber = 0;
    // 이진수 n에서 1의 개수를 셉니다.
    int ones = numOfOne(n);

    for (int i = n + 1; ; ++i) {
        // n 초과하는 수부터 1의 개수가 같은 수를 구합니다.
        if (numOfOne(i) == ones) {
            nextNumber = i;
            break;
        }
    }
    return nextNumber;
}