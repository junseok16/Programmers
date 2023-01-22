/*
* @title    : 콜라츠 추측(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int num) {
    int answer = 0;
    long long numll = (long long)num;

    while (answer <= 500) {
        if (numll == 1) {
            break;
        }

        if (numll % 2 == 0) { numll /= 2; }
        else { numll = 3 * numll + 1; }
        ++answer;
    }

    return answer > 500 ? -1 : answer;
}