/*
* @title    : 개미 군단(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230111
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int hp) {
    int answer = 0;
    answer += hp / 5;
    hp %= 5;
    answer += hp / 3;
    hp %= 3;
    answer += hp;
    return answer;
}