/*
* @title    : 문자열 다루기 기본(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230123
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    if (s.size() != 4 && s.size() != 6) {
        return false;
    }

    for (const auto& e : s) {
        if (e - '0' < 0 || 9 < e - '0') {
            return false;
        }
    }
    return true;
}