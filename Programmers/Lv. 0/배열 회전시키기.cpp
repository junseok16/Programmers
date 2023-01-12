/*
* @title    : 배열 회전시키기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230112
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;

    if (direction == "right") {
        int element = numbers.back();
        numbers.erase(numbers.end() - 1);
        numbers.insert(numbers.begin(), element);
    }
    else {
        int element = numbers.front();
        numbers.erase(numbers.begin());
        numbers.insert(numbers.end(), element);
    }
    return answer;
}