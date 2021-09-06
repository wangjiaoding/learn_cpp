/*
 * @Author: 王教鼎
 * @Date: 2021/9/6 9:13 下午
 * @Description: 练习第6题
 */
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter your driving mileage: ";
    double mileage;
    cin >> mileage;
    cout << "Enter the amount of gasoline used: ";
    double gasoline;
    cin >> gasoline;
    cout << "1 gasoline, " << mileage / gasoline << " mileages" << endl;
    return 0;
}
