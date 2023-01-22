/*
* @title    : 인덱스 바꾸기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230120
* @state    : 완료
*/

#include <string>
#include <vector>
using namespace std;

string solution(string my_string, int num1, int num2) {
    char char1 = my_string[num1];
    char char2 = my_string[num2];
    my_string[num2] = char1;
    my_string[num1] = char2;
    return my_string;
}