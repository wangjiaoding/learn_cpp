/*
 * @Author: 王教鼎
 * @Date: 2021/10/1 2:19 下午
 * @Description: 程序清单11.4
 */

#ifndef LEARN_CPP_MYTIME1_H
#define LEARN_CPP_MYTIME1_H

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
    void Show() const;
};

#endif //LEARN_CPP_MYTIME1_H
