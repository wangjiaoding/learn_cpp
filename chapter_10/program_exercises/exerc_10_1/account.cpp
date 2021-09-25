/*
 * @Author: 王教鼎
 * @Date: 2021/9/25 8:17 下午
 * @Description: 练习第1题
 */
#include "account.h"

#include <utility>

Account::Account() = default;

Account::Account(std::string name, std::string acct, double money)
{
    m_name = std::move(name);
    m_account = std::move(acct);
    m_money = money;
}

void Account::show() const
{
    using std::cout;
    cout << "Name: " << m_name
         << " account: " << m_account
         << " money: " << m_money << '\n';
}

bool Account::set_money(double money){
    m_money += money;
    return true;
}

double Account::get_money(double money)
{
    using std::cout;
    if (m_money > money)
    {
        cout << money << " has been got.\n";
        set_money(-money);
    }
    else
        cout << "insufficient balance.\n";
    return 0.0;
}
