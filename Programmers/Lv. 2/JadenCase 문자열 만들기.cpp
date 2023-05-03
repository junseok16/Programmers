/*
* @title    : JadenCase 문자열 만들기(Lv. 2)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230501
* @state    : 완료
*/

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string s) {
    stringstream ss(s);
    string temp;
    string answer = "";

    while (getline(ss, temp, ' ')) {
        if (temp.empty()) {
            answer += " ";
            continue;
        }

        // 첫 번째 문자가 소문자인 경우
        if ('a' <= temp[0] && temp[0] <= 'z') {
            temp[0] += 'A' - 'a';
        }
        // 그외 문자가 대문자인 경우
        for (unsigned int i = 1; i < temp.size(); ++i) {
            if ('A' <= temp[i] && temp[i] <= 'Z') {
                temp[i] += 'a' - 'A';
            }
        }

        answer += (temp + " ");
    }

    if (s.back() != ' ') {
        answer.erase(answer.end() - 1);
    }
    return answer;
}