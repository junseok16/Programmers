/*
* @title    : 각도기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230109
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int angle) {
    int answer = 0;

    if (0 < angle && angle < 90) {
        answer = 1;
    }
    else if (angle == 90) {
        answer = 2;
    }
    else if (90 < angle && angle < 180) {
        answer = 3;
    }
    else if (angle == 180) {
        answer = 4;
    }
    return answer;
}