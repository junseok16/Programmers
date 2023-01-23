/*
* @title    : 가장 먼 노드(Lv. 3)
* @content  : 그래프
* @author   : 탁준석
* @date     : 230122
* @state    : 완료
*/

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void makeGraph();
void bfs(int i);

// 인접 리스트로 그래프를 표현합니다.
vector<vector<int>> adj, globalEdge;
vector<int> dist;
queue<int> q;

int globalN, maxDistance, numOfNode;

int solution(int n, vector<vector<int>> edge) {
    globalEdge = edge;
    globalN = n;
    makeGraph();
    bfs(1);
    return numOfNode;
}

void makeGraph() {
    adj = vector<vector<int>>(globalN + 1, vector<int>());
    dist = vector<int>(globalN + 1, -1);

    for (unsigned int i = 0; i < globalEdge.size(); ++i) {
        adj[globalEdge[i][0]].push_back(globalEdge[i][1]);
        adj[globalEdge[i][1]].push_back(globalEdge[i][0]);
    }
}

void bfs(int i) {
    q.push(i);
    dist[i] = 0;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (const auto& e : adj[node]) {
            if (dist[e] < 0) {
                q.push(e);
                dist[e] = dist[node] + 1;

                // 최대 거리를 갱신합니다.
                maxDistance = dist[e] > maxDistance ? dist[e] : maxDistance;
            }
        }
    }

    // 최대 거리만큼 떨어진 노드의 개수를 셉니다.
    for (const auto& e : dist) {
        if (e == maxDistance) {
            ++numOfNode;
        }
    }
}