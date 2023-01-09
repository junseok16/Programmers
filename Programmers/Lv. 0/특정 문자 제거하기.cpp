/*
* @title    : 특정 문자 제거하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230109
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    for (const auto& e : my_string) {
        if (e != *letter.c_str()) {
            answer.push_back(e);
        }
    }

    return answer;
}