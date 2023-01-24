/*
* @title    : 서울에서 김서방 찾기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230124
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (unsigned int i = 0; i < seoul.size(); ++i) {
        if (seoul[i] == "Kim") {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break;
        }
    }
    return answer;
}