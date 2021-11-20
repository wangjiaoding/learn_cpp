/*
 * @Author: 王教鼎
 * @Date: 2021/11/20 10:22 下午
 * @Description: 程序清单13.2
 */
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) :
        firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}
