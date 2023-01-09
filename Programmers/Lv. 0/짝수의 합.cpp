/*
* @title    : 짝수의 합(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230109
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            answer += i;
        }
    }
    return answer;
}