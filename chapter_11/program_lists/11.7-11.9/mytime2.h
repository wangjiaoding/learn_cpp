/*
 * @Author: 王教鼎
 * @Date: 2021/10/2 2:14 上午
 * @Description: 程序清单11.7
 */

#ifndef LEARN_CPP_MYTIME2_H
#define LEARN_CPP_MYTIME2_H

class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    void Show() const;
};

#endif //LEARN_CPP_MYTIME2_H
