/*
* @title    : 두 수의 차(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    cin >> num1 >> num2;
    answer = num1 - num2;
    return answer;
}