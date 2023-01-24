/*
* @title    : 없는 숫자 더하기(Lv. 1)
* @content  : 월간 코드 챌린지 시즌3
* @author   : 탁준석
* @date     : 230124
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> isNumber = { 0, 1, 2, 3, 4, 5 ,6, 7, 8, 9 };

    for (const auto& e : numbers) {
        isNumber[e] = -1;
    }
    for (const auto& e : isNumber) {
        if (e > 0) {
            answer += e;
        }
    }
    return answer;
}