/*
* @title    : 짝수와 홀수(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int num) {
    string answer = "";

    if (num % 2) { answer = "Odd"; }
    else { answer = "Even"; }
    return answer;
}