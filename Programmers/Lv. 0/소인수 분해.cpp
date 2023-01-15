/*
* @title    : 소인수 분해(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230115
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            n /= i;

            if (answer.end() == find(answer.begin(), answer.end(), i)) {
                answer.push_back(i);
            }
            i = 1;
        }
    }
    return answer;
}