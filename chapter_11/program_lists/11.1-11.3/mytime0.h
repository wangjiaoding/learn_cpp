/*
 * @Author: 王教鼎
 * @Date: 2021/9/26 11:27 下午
 * @Description: 程序清单11.1
 */

#ifndef LEARN_CPP_MYTIME0_H
#define LEARN_CPP_MYTIME0_H

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
    Time Sum(const Time & t) const;
    void Show() const;
};

#endif //LEARN_CPP_MYTIME0_H
