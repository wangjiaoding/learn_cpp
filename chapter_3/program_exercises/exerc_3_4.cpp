/*
 * @Author: 王教鼎
 * @Date: 2021/9/5 11:49 下午
 * @Description: 练习第4题
 */
#include <iostream>

const int SEC_TO_DAYS_FACTOR = 60 * 60 * 24;
const int SEC_TO_HOUR_FACTOR = 60 * 60;
const int SEC_TO_MINUTE_FACTOR = 60;

int main()
{
    using namespace std;

    cout << "Enter the number of seconds: ";
    long long seconds;
    cin >> seconds;
    int days = seconds / SEC_TO_DAYS_FACTOR;
    int hours = (seconds - days * SEC_TO_DAYS_FACTOR) / SEC_TO_HOUR_FACTOR;
    int minutes = (seconds - days * SEC_TO_DAYS_FACTOR - hours * SEC_TO_HOUR_FACTOR) / SEC_TO_MINUTE_FACTOR;
    int remain_seconds = seconds - days * SEC_TO_DAYS_FACTOR - hours * SEC_TO_HOUR_FACTOR
            - minutes * SEC_TO_MINUTE_FACTOR;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, "<< minutes << " minutes, "
         << remain_seconds << " seconds";
    return 0;
}
