/*
* @title    : 2차원으로 만들기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230112
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int m = num_list.size() / n;
    vector<vector<int>> answer(m, vector<int>(n, 0));

    int index = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            answer[i][j] = num_list[index++];
        }
    }
    return answer;
}