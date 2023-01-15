/*
* @title    : 문자열 정렬하기 (1)(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230115
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (const auto& e : my_string) {
        if (0 <= e - '0' && e - '0' <= 9) {
            answer.push_back(e - '0');
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}