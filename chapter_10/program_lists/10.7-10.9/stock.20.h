/*
 * @Author: 王教鼎
 * @Date: 2021/9/24 12:42 上午
 * @Description: 程序清单10.7
 */

#ifndef LEARN_CPP_STOCK_20_H
#define LEARN_CPP_STOCK_20_H

#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}

public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};

#endif //LEARN_CPP_STOCK_20_H
