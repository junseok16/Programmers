/*
* @title    : 공 던지기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230112
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;

    auto iter = numbers.begin();
    for (int i = 1; i < k; ++i) {
        ++iter;
        if (iter == numbers.end()) {
            iter = iter = numbers.begin();
        }
        ++iter;
        if (iter == numbers.end()) {
            iter = iter = numbers.begin();
        }
    }

    answer = *iter;
    return answer;
}