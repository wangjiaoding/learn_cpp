/*
 * @Author: 王教鼎
 * @Date: 2021/9/16 9:40 下午
 * @Description: 程序清单8.1
 */
#include <iostream>

inline double square(double x) {return x * x;}

int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    return 0;
}
