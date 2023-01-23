/*
* @title    : 이진 변환 반복하기(Lv. 2)
* @content  : 월간 코드 챌린지 시즌 1
* @author   : 탁준석
* @date     : 230123
* @state    : 완료
*/

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int numOfErase = 0, numOfBinary = 0;

vector<int> solution(string s) {
    while (s != "1") {
        // 문자열에서 0을 없앱니다.
        for (auto iter = s.begin(); iter != s.end(); ++iter) {
            if (*iter == '0') {
                s.erase(iter);
                ++numOfErase;
                --iter;
            }
        }

        // 문자열의 크기를 이진수로 변환합니다.
        int num = s.size();
        s = "";
        while (num > 0) {
            s.append(to_string(num % 2));
            num /= 2;
        }
        reverse(s.begin(), s.end());
        ++numOfBinary;
    }

    // 이진 변환의 횟수와 0을 없앤 횟수를 출력합니다.
    vector<int> answer = { numOfBinary, numOfErase };
    return answer;
}