/*
* @title    : 평균 구하기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

    for (const auto& e : arr) {
        answer += e;
    }
    answer /= arr.size();
    return answer;
}