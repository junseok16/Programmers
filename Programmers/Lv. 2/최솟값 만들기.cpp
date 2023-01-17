/*
* @title    : 최솟값 만들기(Lv. 1)
* @content  : 연습문제
* @author   : 탁준석
* @date     : 230117
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int sum = 0;
    sort(A.begin(), A.end(), less<int>());
    sort(B.begin(), B.end(), greater<int>());

    for (unsigned int i = 0; i < A.size(); ++i) {
        sum += A[i] * B[i];
    }
    return sum;
}