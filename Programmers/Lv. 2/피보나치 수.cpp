/*
* @title    : 피보나치 수(Lv. 2)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230112
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> table(100001, -1);

int fibonacci(int i) {
    // 테이블에 저장된 값이 있는 경우
    if (table[i] > 0) {
        return table[i];
    }

    if (i == 0 || i == 1) {
        table[i] = i;
        return i;
    }
    else {
        return table[i] = (fibonacci(i - 2) + fibonacci(i - 1)) % 1234567;
    }
}

int solution(int n) {
    return fibonacci(n);
}