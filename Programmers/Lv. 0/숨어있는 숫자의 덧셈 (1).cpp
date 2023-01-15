/*
* @title    : 숨어있는 숫자의 덧셈 (1)(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230115
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (const auto& e : my_string) {
        if (1 <= e - '0' && e - '0' <= 9) {
            answer += e - '0';
        }
    }
    return answer;
}