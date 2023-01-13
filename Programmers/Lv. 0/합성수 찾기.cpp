/*
* @title    : 합성수 찾기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230113
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

bool isComposite(int num) {
    if (num == 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        if (isComposite(i) == true) {
            ++answer;
        }
    }
    return answer;
}