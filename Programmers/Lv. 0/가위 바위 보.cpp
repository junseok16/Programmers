/*
* @title    : 가위 바위 보(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230111
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string rsp) {
    string answer = "";
    for (const auto& e : rsp) {
        if (e == '2') { answer.push_back('0'); }
        else if (e == '0') { answer.push_back('5'); }
        else if (e == '5') { answer.push_back('2'); }
    }
    return answer;
}