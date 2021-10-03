/*
 * @Author: 王教鼎
 * @Date: 2021/10/3 4:54 下午
 * @Description: 程序清单11.10
 */

#ifndef LEARN_CPP_MYTIME3_H
#define LEARN_CPP_MYTIME3_H

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    friend Time operator*(double m, const Time & t) {return t * m;}
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif //LEARN_CPP_MYTIME3_H
