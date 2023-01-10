/*
* @title    : 외계행성의 나이(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230110
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int age) {
    string answer = "";

    while (age > 0) {
        char digit = age % 10 + 97;
        answer.push_back(digit);
        age /= 10;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}