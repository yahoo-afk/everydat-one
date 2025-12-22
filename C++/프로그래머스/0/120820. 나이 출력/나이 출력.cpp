#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(int age) {
    int answer = 0;
    answer = 2022 - age +1;
    return answer;
}
int main() {
    int a;
    cin >> a;
    cout << "2022년 기준" << a << "살이므로" << solution(a) << "년생입니다" << endl;
}