/*
* @title    : 음양 더하기(Lv. 1)
* @content  : 월간 코드 챌린지 시즌2
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for (unsigned int i = 0; i < signs.size(); ++i) {
        if (signs[i] == true) { answer += absolutes[i]; }
        else { answer -= absolutes[i]; }
    }
    return answer;
}