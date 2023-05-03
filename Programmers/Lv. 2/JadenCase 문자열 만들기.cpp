/*
* @title    : JadenCase 문자열 만들기(Lv. 2)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230503
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer = "";
    answer += toupper(s[0]);

    // 첫 문자를 대문자로 변경하거나 나머지 문자를 소문자로 변경합니다.
    for (unsigned int i = 1; i < s.size(); ++i) {
        s[i - 1] == ' ' ? answer += toupper(s[i]) : answer += tolower(s[i]);
    }
    return answer;
}