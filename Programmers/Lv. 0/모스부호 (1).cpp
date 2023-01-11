/*
* @title    : 모스부호 (1)(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230111
* @state    : 완료
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string letter) {
    string answer = "";
    auto begin = letter.begin();
    vector<string> morse = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    for (auto iter = letter.begin(); ; ++iter) {
        if (iter == letter.end()) {
            string alphabet(begin, iter);
            answer += find(morse.begin(), morse.end(), alphabet) - morse.begin() + 97;
            break;
        }

        if (*iter == ' ') {
            string alphabet(begin, iter);
            answer += find(morse.begin(), morse.end(), alphabet) - morse.begin() + 97;
            begin = iter + 1;
        }
    }
    return answer;
}