/*
* @title    : 모음 제거(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230115
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto iter = my_string.begin(); iter != my_string.end(); ++iter) {
        if (*iter == 'a' || *iter == 'e' || *iter == 'i' || *iter == 'o' || *iter == 'u') {
            my_string.erase(iter);
            --iter;
        }
    }
    answer = my_string;
    return answer;
}