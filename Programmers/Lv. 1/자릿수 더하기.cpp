/*
* @title    : 자릿수 더하기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;

    while (n > 0) {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}