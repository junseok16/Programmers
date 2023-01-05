/*
* @title    : K번째 수(Lv. 1)
* @content  : 정렬
* @author   : 탁준석
* @date     : 230103
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (unsigned int i = 0; i < commands.size(); ++i) {
        vector<int> temp;

        for (int j = commands[i][0]; j <= commands[i][1]; ++j) {
            temp.push_back(array[j - 1]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }
    return answer;
}