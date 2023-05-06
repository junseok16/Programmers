/*
* @title    : 달리기 경주(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230505
* @state    : 완료
*/

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> ranks;
    for (unsigned int i = 0; i < players.size(); ++i) {
        ranks.insert({ players[i], i });
    }

    for (const auto& calling : callings) {
        auto rank = ranks.find(calling)->second;
        ranks[players[rank]]--;
        ranks[players[rank - 1]]++;
        swap(players[rank - 1], players[rank]);
    }
    return players;
}