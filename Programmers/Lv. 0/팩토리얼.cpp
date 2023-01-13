/*
* @title    : 팩토리얼(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230113
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> table(10 + 1, -1);
    table[0] = table[1] = 1;

    for (int i = 2; i <= 11; ++i) {
        table[i] = i * table[i - 1];
        if (table[i] > n) {
            answer = i - 1;
            break;
        }
    }

    return answer;
}