/*
* @title    : 중앙값 구하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230105
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    answer = array[array.size() / 2];
    return answer;
}