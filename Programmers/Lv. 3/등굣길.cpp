/*
* @title    : 등굣길(Lv. 3)
* @content  : 동적 계획법
* @author   : 탁준석
* @date     : 230124
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> table;

int solution(int m, int n, vector<vector<int>> puddles) {
    table = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
    for (int i = 0; i < n + 1; ++i) { table[i][0] = 0; }
    for (int j = 0; j < m + 1; ++j) { table[0][j] = 0; }
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            table[i][j] = -1;
        }
    }
    for (unsigned int i = 0; i < puddles.size(); ++i) {
        table[puddles[i][1]][puddles[i][0]] = 0;
    }
    table[1][1] = 1;

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (table[i][j] == -1) {
                table[i][j] = (table[i - 1][j] + table[i][j - 1]) % 1000000007;
            }
        }
    }
    return table[n][m];
}