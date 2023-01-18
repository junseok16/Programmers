/*
* @title    : 컨트롤 제트(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230118
* @state    : 완료
*/

#include <string>
#include <vector>
#include <numeric>
using namespace std;

int solution(string s) {
    string delimiter = " ";
    vector<int> number;
    int position = 0;

    while (true) {
        position = s.find(delimiter);

        if (position != string::npos) {
            string token = s.substr(0, position);

            if (token == "Z") { number.pop_back(); }
            else { number.push_back(stoi(s.substr(0, position))); }
            s.erase(0, position + delimiter.length());
        }
        else {
            if (s == "Z") { number.pop_back(); }
            else { number.push_back(stoi(s)); }
            break;
        }
    }

    return accumulate(number.begin(), number.end(), 0);
}