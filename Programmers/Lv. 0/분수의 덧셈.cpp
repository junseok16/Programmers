/*
* @title    : 분수의 덧셈(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230104
* @state    : 완료
*/

#include <string>
#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int a = denum1 * num2 + num1 * denum2;
    int b = num1 * num2;
    int gcd = std::gcd(a, b);

    answer.push_back(a / gcd);
    answer.push_back(b / gcd);
    return answer;
}