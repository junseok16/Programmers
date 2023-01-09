/*
* @title    : 짝수 홀수 개수(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230108
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(2, 0);
    for (const auto& e : num_list) {
        if (e % 2 == 0) { ++answer[0]; }
        else { ++answer[1]; }
    }
    return answer;
}