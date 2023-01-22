/*
* @title    : 문자열 내림차순으로 배치하기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230104
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<>());
    answer = s;
    return answer;
}