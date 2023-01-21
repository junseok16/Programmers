/*
* @title    : 하샤드 수(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230121
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int digit = 0, n = x;

    while (x) {
        digit += x % 10;
        x /= 10;
    }

    if (n % digit == 0) { answer = true; }
    else { answer = false; }
    return answer;
}