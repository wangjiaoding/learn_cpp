/*
 * @Author: 王教鼎
 * @Date: 2021/9/13 11:47 下午
 * @Description: 程序清单7.3
 */
#include <iostream>

using namespace std;
void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}
