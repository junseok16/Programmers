/*
* @title    : 진료 순서 정하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230110
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer, sorted;
    sorted = emergency;
    sort(sorted.begin(), sorted.end(), greater<>());

    for (unsigned int i = 0; i < emergency.size(); ++i) {
        for (unsigned int j = 0; j < sorted.size(); ++j) {
            if (emergency[i] == sorted[j]) {
                answer.push_back(j + 1);
            }
        }
    }
    return answer;
}