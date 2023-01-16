/*
* @title    : 배열 원소의 길이(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230116
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for (const auto& e : strlist) {
        answer.push_back(e.size());
    }
    return answer;
}