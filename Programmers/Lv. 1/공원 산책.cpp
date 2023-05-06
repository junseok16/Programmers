/*
* @title    : 공원 산책(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230506
* @state    : 완료
*/

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> dx = { 1, -1, 0, 0 };
vector<int> dy = { 0, 0, 1, -1 };
unordered_map<char, int> direction = { { 'S', 0 }, { 'N', 1 }, { 'E', 2 }, { 'W', 3 } };

vector<int> solution(vector<string> park, vector<string> routes) {
    int H = park.size();
    int W = park[0].size();
    int cx, cy;

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (park[i][j] == 'S') {
                cx = i, cy = j;
            }
        }
    }

    int nx, ny;
    for (unsigned int i = 0; i < routes.size(); ++i) {
        int op = direction[routes[i][0]];
        int n = routes[i][2] - '0';
        bool isValid = true;

        nx = cx; ny = cy;
        for (int j = 0; j < n; ++j) {
            nx += dx[op];
            ny += dy[op];

            // 공원을 벗어나는 경우
            if (nx < 0 || ny < 0 || nx >= H || ny >= W) {
                isValid = false;
                break;
            }
            // 장애물을 만나는 경우
            if (park[nx][ny] == 'X') {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            cx = nx; cy = ny;
        }
    }

    return { cx, cy };
}