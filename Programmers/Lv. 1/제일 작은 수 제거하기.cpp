/*
* @title    : 제일 작은 수 제거하기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    arr.erase(min_element(arr.begin(), arr.end()));
    answer = arr;

    if (answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}