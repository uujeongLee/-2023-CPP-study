//https://www.acmicpc.net/problem/3009

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // 좌표 변수 선언
    int first, second, third, first2, second2, third2;

    // 6개의 좌표 입력 받음
    cin >> first >> first2 >> second >> second2 >> third >> third2;

    // 입력 받은 6개의 좌표를 std::list에 삽입
    list<int> list_x = {first, second, third};
    list<int> list_y = {first2, second2, third2};

    // 확인용 리스트_x 출력
    cout << "리스트_x: ";
    for (const int& item : list_x) {
        cout << item << " ";
    }
    cout << endl;

    // 확인용 리스트_y 출력
    cout << "리스트_y: ";
    for (const int& item : list_y) {
        cout << item << " ";
    }
    cout << endl;

    // 중복된 요소 제거
    list_x.sort();
    list_y.sort();

    list_x.erase(unique(list_x.begin(), list_x.end()), list_x.end());
    list_y.erase(unique(list_y.begin(), list_y.end()), list_y.end());

    // 결과 출력
    cout << "중복이 제거된 리스트_x: ";
    for (const auto& item : list_x) {
        cout << item << " ";
    }
    cout << endl;

    cout << "중복이 제거된 리스트_y: ";
    for (const auto& item : list_y) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
