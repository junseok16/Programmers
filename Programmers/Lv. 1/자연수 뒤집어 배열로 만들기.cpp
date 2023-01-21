/*
* @title    : 자연수 뒤집어 배열로 만들기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230104
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}