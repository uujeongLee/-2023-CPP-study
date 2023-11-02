//https://www.acmicpc.net/problem/2798

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> cards(N);

    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    int result = 0;

    // 가능한 모든 3장의 카드 조합을 검사하며, M에 최대한 가까운 합을 찾는다.
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= M) {
                    result = max(result, sum);
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}
