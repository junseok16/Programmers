/*
* @title    : 나이 출력(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230107
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    reverse(num_list.begin(), num_list.end());
    answer = num_list;
    return answer;
}