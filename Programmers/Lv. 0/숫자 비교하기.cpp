﻿/*
* @title    : 숫자 비교하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230104
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = num1 != num2 ? -1 : 1;
    return answer;
}