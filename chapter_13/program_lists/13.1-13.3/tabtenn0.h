/*
 * @Author: 王教鼎
 * @Date: 2021/11/20 10:21 下午
 * @Description: 程序清单13.1
 */

#ifndef LEARN_CPP_TABTENN0_H
#define LEARN_CPP_TABTENN0_H
#include <string>

using std::string;
class TableTennisPlayer{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string & fn = "node", const string & ln = "node", bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;};
    void ResetTable(bool v) {hasTable = v;};
};

#endif //LEARN_CPP_TABTENN0_H
