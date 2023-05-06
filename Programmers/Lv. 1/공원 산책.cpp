/*
* @title    : 공원 산책(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230506
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
#define X first
#define Y second
using namespace std;

vector<vector<char>> adj;
pair<int, int> S, R;
int N, M;

void MakeGraph(vector<string>& park) {
    N = park.size();
    M = park[0].size();
    S = { 0, 0 }, R = { 0, 0 };

    adj = vector<vector<char>>(N, vector<char>(M, 'O'));
    for (unsigned int i = 0; i < park.size(); ++i) {
        for (unsigned int j = 0; j < park[i].size(); ++j) {
            adj[i][j] = park[i][j];
            if (adj[i][j] == 'S') { R = S = { i, j }; }
        }
    }
}

bool isObstacle(char op, int n) {
    bool isObstacle = false;

    switch (op) {
    case 'E':
        if (R.Y + n >= M) { isObstacle = true; break; }
        for (int i = R.Y + 1; i <= R.Y + n; ++i) {
            if (adj[R.X][i] == 'X') {
                isObstacle = true;
                break;
            }
        }
        break;

    case 'W':
        if (R.Y - n < 0) { isObstacle = true; break; }
        for (int i = R.Y - 1; i >= R.Y - n; --i) {
            if (adj[R.X][i] == 'X') {
                isObstacle = true;
                break;
            }
        }
        break;

    case 'S':
        if (R.X + n >= N) { isObstacle = true; break; }
        for (int i = R.X + 1; i <= R.X + n; ++i) {
            if (adj[i][R.Y] == 'X') {
                isObstacle = true;
                break;
            }
        }
        break;

    case 'N':
        if (R.X - n < 0) { isObstacle = true; break; }
        for (int i = R.X - 1; i >= R.X - n; --i) {
            if (adj[i][R.Y] == 'X') {
                isObstacle = true;
                break;
            }
        }
        break;
    }
    return isObstacle;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    MakeGraph(park);

    for (unsigned int i = 0; i < routes.size(); ++i) {
        char op = routes[i][0];
        int n = routes[i][2] - '0';

        if (isObstacle(op, n)) {
            continue;
        }

        switch (op) {
        case 'E':
            R = { R.X, R.Y + n };
            break;
        case 'W':
            R = { R.X, R.Y - n };
            break;
        case 'S':
            R = { R.X + n, R.Y };
            break;
        case 'N':
            R = { R.X - n, R.Y };
            break;
        }
    }

    vector<int> answer{ R.X, R.Y };
    return answer;
}