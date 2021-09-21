/*
 * @Author: 王教鼎
 * @Date: 2021/9/21 10:15 下午
 * @Description: 练习第3题
 */
#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str[0] != 'q')
    {
        for (char i : str)
        {
            char ch = char(toupper(i));
            cout << ch;
        }
        cout << "\nNext string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye.\n";
}
