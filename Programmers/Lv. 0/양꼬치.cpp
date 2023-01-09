/*
* @title    : 양꼬치(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230109
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int sheep = n * 12000;
    int beverage = (k - n / 10) * 2000;
    answer = sheep + beverage;
    return answer;
}