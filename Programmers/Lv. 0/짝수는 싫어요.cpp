/*
* @title    : 짝수는 싫어요(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230105
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 1; i <= n; i += 2) {
        answer.push_back(i);
    }
    return answer;
}