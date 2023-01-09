/*
* @title    : 문자열 뒤집기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230108
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    reverse(my_string.begin(), my_string.end());
    answer = my_string;
    return answer;
}