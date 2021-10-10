/*
 * @Author: 王教鼎
 * @Date: 2021/10/9 8:40 下午
 * @Description: 程序清单12.1
 */

#ifndef LEARN_CPP_STRINGBAD_H
#define LEARN_CPP_STRINGBAD_H
#include <iostream>

class StringBad
{
private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};


#endif //LEARN_CPP_STRINGBAD_H
