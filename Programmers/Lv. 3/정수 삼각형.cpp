/*
* @title    : 정수 삼각형(Lv. 3)
* @content  : 동적 계획법
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> triangle) {
    for (unsigned int i = 1; i < triangle.size(); ++i) {
        for (unsigned int j = 0; j < triangle[i].size(); ++j) {
            // 삼각형의 양변에 있는 숫자인 경우
            if (j == 0) { triangle[i][j] += triangle[i - 1][j]; }
            else if (j == i) { triangle[i][j] += triangle[i - 1][j - 1]; }

            // 삼각형의 양변 안쪽에 있는 숫자인 경우
            else { triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]); }
        }
    }
    return *max_element(triangle[triangle.size() - 1].begin(), triangle[triangle.size() - 1].end());
}