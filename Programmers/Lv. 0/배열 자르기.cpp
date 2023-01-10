/*
* @title    : 배열 자르기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230110
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    answer = vector<int>(numbers.begin() + num1, numbers.begin() + num2 + 1);
    return answer;
}