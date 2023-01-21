/*
* @title    : 나머지가 1이 되는 수 찾기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= 1000000; ++i) {
        if (n % i == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}