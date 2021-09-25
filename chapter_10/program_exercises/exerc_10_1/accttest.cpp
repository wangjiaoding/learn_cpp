/*
 * @Author: 王教鼎
 * @Date: 2021/9/25 8:27 下午
 * @Description: 练习第1题
 */
#include <iostream>
#include "account.h"

int main()
{
    using namespace std;
    cout << "Enter name, account, money: \n";
    string name;
    string account;
    double money;
    cin >> name >> account >> money;
    Account bank_account = Account(name, account, money);
    bank_account.show();
    cout << "Enter the money your want to deposit(q to quit): ";
    while (cin >> money && money != 'q')
    {
        while (cin.get() != '\n')
            continue;
        bank_account.set_money(money);
        bank_account.show();
        cout << "Enter the money your want to set(q to quit): ";
    }

    double get_money;
    cin.clear();
    cin.get();
    cout << "\nEnter the money your want to get(q to quit): ";
    while (cin >> get_money && get_money != 'q')
    {
        while (cin.get() != '\n')
            continue;
        bank_account.get_money(get_money);
        bank_account.show();
        cout << "Enter the money your want to set(q to quit): ";
    }
    return 0;
}
