/*
* @title    : 문자 반복 출력하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230108
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (unsigned int i = 0; i < my_string.size(); ++i) {
        for (int j = 0; j < n; ++j) {
            answer += my_string[i];
        }
    }

    return answer;
}