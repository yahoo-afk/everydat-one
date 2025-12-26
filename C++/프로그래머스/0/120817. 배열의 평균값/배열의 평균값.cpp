#include <string>
#include <vector>
#include <iostream>
using namespace std;
double solution(vector<int> numbers) {

    double sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << sum / numbers.size() << endl;
    return sum/numbers.size();
}
int main() {
    int n;
    cin >> n;
    solution(vector<int>(n));
}