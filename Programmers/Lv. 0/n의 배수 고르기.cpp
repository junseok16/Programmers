/*
* @title    : n의 배수 고르기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for (const auto& e : numlist) {
        if (e % n == 0) {
            answer.push_back(e);
        }
    }
    return answer;
}