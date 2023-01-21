/*
* @title    : 정수 내림차순으로 배치하기(Lv. 1)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230121
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    sort(s.begin(), s.end(), greater<char>());
    return stoll(s);
}