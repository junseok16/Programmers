/*
* @title    : 배열 두 배 만들기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (const auto& e : numbers) {
        answer.push_back(e * 2);
    }
    return answer;
}