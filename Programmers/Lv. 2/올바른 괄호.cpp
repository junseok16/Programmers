/*
* @title    : 올바른 괄호(Lv. 1)
* @content  : 스택/큐
* @author   : 탁준석
* @date     : 230117
* @state    : 완료
*/

#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string str) {
    bool answer = false;
    stack<int> s;

    for (const auto& e : str) {
        if (e == '(') { s.push(1); }
        else {
            if (s.empty()) { return false; }
            s.pop();
        }
    }

    if (!s.empty()) { answer = false; }
    else { answer = true; }
    return answer;
}