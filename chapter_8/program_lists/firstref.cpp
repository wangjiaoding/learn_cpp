/*
 * @Author: 王教鼎
 * @Date: 2021/9/16 9:41 下午
 * @Description: 程序清单8.2
 */
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}
