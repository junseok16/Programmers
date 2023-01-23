/*
* @title    : 네트워크(Lv. 3)
* @content  : 깊이/너비 우선 탐색
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
#include <queue>
using namespace std;

void makeGraph();
void bfsAll();
void bfs(int i);

// 인접 리스트로 그래프를 표현합니다.
vector<vector<int>> adj, globalComputers;
vector<bool> visited;
queue<int> q;

int globalN, numOfNetwork;

int solution(int n, vector<vector<int>> computers) {
    globalComputers = computers;
    globalN = n;
    makeGraph();
    bfsAll();
    return numOfNetwork;
}

void makeGraph() {
    adj = vector<vector<int>>(globalN, vector<int>());
    visited = vector<bool>(globalN, false);
    numOfNetwork = 0;

    // 인접 행렬을 인접 리스트로 변환합니다.
    for (int i = 0; i < globalN; ++i) {
        for (int j = 0; j < globalN; ++j) {
            if (globalComputers[i][j] == 1 && i != j) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}

void bfsAll() {
    for (int i = 0; i < globalN; ++i) {
        if (visited[i] == false) {
            bfs(i);
            ++numOfNetwork;
        }
    }
}

void bfs(int i) {
    q.push(i);
    visited[i] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (const auto& e : adj[node]) {
            if (visited[e] == false) {
                q.push(e);
                visited[e] = true;
            }
        }
    }
}