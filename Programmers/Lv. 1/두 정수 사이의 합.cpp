/*
* @title    : 두 정수 사이의 합(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int minNumber = min(a, b);
    int maxNumber = max(a, b);

    for (int i = minNumber; i <= maxNumber; ++i) {
        answer += i;
    }
    return answer;
}