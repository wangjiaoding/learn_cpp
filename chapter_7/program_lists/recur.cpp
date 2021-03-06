/*
 * @Author: 王教鼎
 * @Date: 2021/9/16 9:33 下午
 * @Description: 程序清单7.16
 */
#include <iostream>

void countdown(int n);

int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Count down ... " << n << endl;
    if (n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!\n";
}
