/*
 * @Author: 王教鼎
 * @Date: 2021/9/16 11:09 下午
 * @Description: 程序清单8.5
 */
#include <iostream>

double cube(double a);
double refcube(double &ra);

int main()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}
