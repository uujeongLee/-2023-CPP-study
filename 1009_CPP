//https://www.acmicpc.net/problem/1934

#include <iostream>
using namespace std;

// 최대 공약수(GCD)를 계산하는 함수
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 최소 공배수(LCM)를 계산하는 함수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B;
        cin >> A >> B;
        
        int result = lcm(A, B);
        cout << result << std::endl;
    }
    
    return 0;
}
