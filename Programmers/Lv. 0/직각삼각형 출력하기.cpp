/*
* @title    : 직각삼각형 출력하기(Lv. 0)
* @content  : 코딩테스트 입문
* @author   : 탁준석
* @date     : 230108
* @state    : 완료
*/

#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}