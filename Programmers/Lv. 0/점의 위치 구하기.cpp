/*
* @title    : 점의 위치 구하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230112
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    if (0 < dot[0] && 0 < dot[1]) { answer = 1; }
    else if (0 > dot[0] && 0 < dot[1]) { answer = 2; }
    else if (0 > dot[0] && 0 > dot[1]) { answer = 3; }
    else if (0 < dot[0] && 0 > dot[1]) { answer = 4; }
    return answer;
}