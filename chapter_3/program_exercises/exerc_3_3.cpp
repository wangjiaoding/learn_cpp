/*
 * @Author: 王教鼎
 * @Date: 2021/9/5 11:47 下午
 * @Description: 练习第3题
 */
#include <iostream>

const int MIN_TO_DEGREE_FACTOR = 60;
const int SEC_TO_DEGREE_FACTOR = 3600;

int main()
{
    using namespace std;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    double degrees;
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    double minute_of_arc;
    cin >> minute_of_arc;
    cout << "Finally, enter the seconds of arc:";
    double seconds_of_arc;
    cin >> seconds_of_arc;
    double degrees_new = degrees + minute_of_arc / MIN_TO_DEGREE_FACTOR + seconds_of_arc / SEC_TO_DEGREE_FACTOR;
    cout << degrees << " degrees, " << minute_of_arc << " minutes, " << seconds_of_arc << " seconds ";
    cout << degrees_new << " degrees" << endl;
    return 0;
}
