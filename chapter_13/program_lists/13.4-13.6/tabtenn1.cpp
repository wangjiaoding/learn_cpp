/*
 * @Author: 王教鼎
 * @Date: 2021/11/20 10:25 下午
 * @Description: 程序清单13.5
 */
#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const std::string &fn, const std::string &ln, bool ht) : firstname(fn),
                                                                                              lastname(ln), hasTable(ht){}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const std::string &fn, const std::string &ln, bool ht) :
        TableTennisPlayer(fn, ln ,ht){
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp) : TableTennisPlayer(tp), rating(r)
{

}
