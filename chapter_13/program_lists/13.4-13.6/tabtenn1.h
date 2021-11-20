/*
 * @Author: 王教鼎
 * @Date: 2021/11/20 10:24 下午
 * @Description: 程序清单13.4
 */

#ifndef LEARN_CPP_TABTENN1_H
#define LEARN_CPP_TABTENN1_H
#include <string>

using std::string;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;};
    void ResetTable(bool v) {hasTable = v;};
};

class RatedPlayer: public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating() const {return rating;}
    void ResetRating(unsigned int r) {rating = r;}
};

#endif //LEARN_CPP_TABTENN1_H
