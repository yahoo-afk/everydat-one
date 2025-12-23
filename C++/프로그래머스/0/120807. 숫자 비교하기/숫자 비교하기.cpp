#include <string>
#include <vector>
#include<iostream>
using namespace std;

int  solution(int num1, int num2)
{
    
    int sum = 0;
    if (num1 == num2)
    {   
        sum = 1;
        cout << "num1은" << num1 << "이고" << "num2는" << num2 << "이므로 두수가 같습니다. 따라서"<<sum<< "을 리턴합니다" << endl;
               return sum ;
    }
    else
    {   
        sum = -1;
        cout << "num1은" << num1 << "이고" << "num2는" << num2 << "이므로 두수가 다릅니다. 따라서" <<sum<<"을 리턴합니다" << endl;
        return sum;


    }
}
int main() {
    int n1;
    int n2;
    cin >> n1 >> n2;
    solution(n1,n2);
}