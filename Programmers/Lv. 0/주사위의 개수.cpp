/*
* @title    : 주사위의 개수(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230113
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> box, int n) {
    int answer = (box[0] / n) * (box[1] / n) * (box[2] / n);
    return answer;
}