/*
* @title    : 아이스 아메리카노(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230107
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    answer.push_back(money / 5500);
    answer.push_back(money % 5500);
    return answer;
}