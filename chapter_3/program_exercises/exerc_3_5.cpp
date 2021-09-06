/*
 * @Author: 王教鼎
 * @Date: 2021/9/6 1:55 上午
 * @Description: 练习第5题
 */
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the world's population: ";
    long long population_world;
    cin >> population_world;
    cout << "Enter the population of the US: ";
    long long population_us;
    cin >> population_us;
    long double percent = (long double)population_us / (long double)population_world * 100.0;
    cout << "The population of the US is " << percent << "% of the world population." << endl;
    return 0;
}
