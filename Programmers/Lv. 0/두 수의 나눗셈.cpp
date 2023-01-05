/*
* @title    : 두 수의 나눗셈(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230104
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int num1, int num2) {
    double answer = (double)num1 / num2 * 1000;
    return (int)answer;
}