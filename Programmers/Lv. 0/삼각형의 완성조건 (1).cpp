/*
* @title    : 삼각형의 완성조건(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230116
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());

    if (sides[0] + sides[1] > sides[2]) { answer = 1; }
    else { answer = 2; }
    return answer;
}