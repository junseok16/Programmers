/*
* @title    : 순서쌍의 개수(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230110
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            ++answer;
        }
    }
    return answer;
}