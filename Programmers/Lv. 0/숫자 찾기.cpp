/*
* @title    : 숫자 찾기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string number = to_string(num);

    for (unsigned int i = 0; i < number.size(); ++i) {
        if (number[i] == '0' + k) {
            answer = i + 1;
            break;
        }
    }
    return answer;
}