/*
* @title    : 약수의 합(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230121
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            answer += (i + n / i);
        }

        if (i * i == n) {
            answer -= i;
        }
    }
    return answer;
}