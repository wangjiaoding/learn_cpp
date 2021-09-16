/*
 * @Author: 王教鼎
 * @Date: 2021/9/16 9:38 下午
 * @Description: 练习第1题
 */
#include <iostream>

double calc_avg(int x, int y);

int main()
{
    using namespace std;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    while (0 != num1 && 0 != num2)
    {
        double avg = calc_avg(num1, num2);
        cout << "avg = " << avg << endl << endl;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    cout << "Finish." << endl;
    return 0;
}

double calc_avg(int x, int y)
{
    return 2.0 * x * y / (x + y);
}
