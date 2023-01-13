/*
* @title    : 최댓값 만들기 (1)(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230113
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int answer = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    return answer;
}