/*
* @title    : 삼각형의 완성조건(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230116
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int longestSide = *max_element(sides.begin(), sides.end());
    int sumOfOtherSides = 0;
    bool isFound = false;

    for (const auto& e : sides) {
        if (e == longestSide) {
            if (isFound == false) { isFound = true; }
            else { sumOfOtherSides += e; }
        }
        else { sumOfOtherSides += e; }
    }

    if (longestSide < sumOfOtherSides) { answer = 1; }
    else { answer = 2; }
    return answer;
}