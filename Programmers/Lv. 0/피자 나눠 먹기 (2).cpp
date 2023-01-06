/*
* @title    : 피자 나눠 먹기 (2)(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230106
* @state    : 완료
*/

#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(int n) {
    int answer = 0;
    answer = lcm(n, 6) / 6;
    return answer;
}