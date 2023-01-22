/*
* @title    : 369게임(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230117
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int order) {
    int answer = 0;
    while (order > 0) {
        int digit = order % 10;

        if (digit == 3 || digit == 6 || digit == 9) {
            ++answer;
        }
        order /= 10;
    }
    return answer;
}