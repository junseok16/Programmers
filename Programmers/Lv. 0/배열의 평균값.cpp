/*
* @title    : 배열의 평균값(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230106
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for (const auto& e : numbers) {
        answer += e;
    }
    answer /= numbers.size();
    return answer;
}