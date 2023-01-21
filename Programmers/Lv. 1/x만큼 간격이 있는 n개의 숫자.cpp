/*
* @title    : x만큼 간격이 있는 n개의 숫자(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230121
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = x, j = 0; j < n; i += x, ++j) {
        answer.push_back(i);
    }
    return answer;
}