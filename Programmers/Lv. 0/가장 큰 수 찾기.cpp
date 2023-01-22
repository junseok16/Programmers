/*
* @title    : 가장 큰 수 찾기(Lv. 0)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230121
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2, 0);
    answer.at(0) = *max_element(array.begin(), array.end());
    answer.at(1) = max_element(array.begin(), array.end()) - array.begin();
    return answer;
}