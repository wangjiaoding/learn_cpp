/*
 * @Author: 王教鼎
 * @Date: 2021/12/16 13:30
 * @Description: 程序清单17.11
 */
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter numbers: ";

    int sum = 0;
    int input;
    while (cin >> input)
    {
        sum += input;
    }

    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}
