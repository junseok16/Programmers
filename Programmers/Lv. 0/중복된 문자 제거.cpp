/*
* @title    : 중복된 문자 제거(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230118
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    vector<int> sentence;

    for (unsigned int i = 0; i < my_string.size(); ++i) {
        if (find(sentence.begin(), sentence.end(), my_string[i]) == sentence.end()) {
            sentence.push_back(my_string[i]);
        }
    }

    string answer = "";
    for (const auto& e : sentence) {
        answer += e;
    }
    return answer;
}