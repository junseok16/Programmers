/*
* @title    : 최빈값 구하기(Lv. 0)
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
    vector<int> seq(1000, 0);
    for (const auto& e : array) {
        ++seq[e];
    }

    int cnt = 0;
    int mode = *max_element(seq.begin(), seq.end());
    int index = max_element(seq.begin(), seq.end()) - seq.begin();

    for (const auto& e : seq) {
        if (e == mode) {
            if (++cnt > 1) {
                return -1;
            }
        }
    }
    answer = index;
    return answer;
}