/*
* @title    : 옷가게 할인 받기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230107
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int price) {
    int answer = 0;
    double temp = 0;

    if (price >= 500000) {
        temp = (double)price * 80 / 100;
    }
    else if (price >= 300000) {
        temp = (double)price * 90 / 100;
    }
    else if (price >= 100000) {
        temp = (double)price * 95 / 100;
    }
    else {
        temp = (double)price;
    }
    answer = (int)temp;
    return answer;
}