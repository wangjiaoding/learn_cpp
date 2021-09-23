/*
 * @Author: 王教鼎
 * @Date: 2021/9/22 11:37 下午
 * @Description: 程序清单10.4
 */

#ifndef LEARN_CPP_STOCK10_H
#define LEARN_CPP_STOCK10_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
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
    void show();
};

#endif //LEARN_CPP_STOCK10_H
