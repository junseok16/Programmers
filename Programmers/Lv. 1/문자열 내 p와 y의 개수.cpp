/*
* @title    : 문자열 내의 p와 y의 개수(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230116
* @state    : 완료
*/

#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    int numOfP = 0, numOfY = 0;

    for (const auto& e : s) {
        if (e == 'p' || e == 'P') { ++numOfP; }
        else if (e == 'y' || e == 'Y') { ++numOfY; }
    }
    return numOfP == numOfY ? true : false;
}