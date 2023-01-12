/*
* @title    : 구슬을 나누는 경우의 수(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230111
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int combination(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    }
    else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

int solution(int balls, int share) {
    return combination(balls, share);
}