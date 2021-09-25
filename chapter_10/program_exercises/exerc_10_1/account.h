/*
 * @Author: 王教鼎
 * @Date: 2021/9/25 8:16 下午
 * @Description: 练习第1题
 */

#ifndef LEARN_CPP_ACCOUNT_H
#define LEARN_CPP_ACCOUNT_H

#include <iostream>
#include <string>

class Account
{
private:
    std::string m_name;
    std::string m_account;
    double m_money{};

public:
    Account();
    Account(std::string name, std::string account, double money);
    void show() const;
    bool set_money(double money);
    double get_money(double money);
};

#endif //LEARN_CPP_ACCOUNT_H
