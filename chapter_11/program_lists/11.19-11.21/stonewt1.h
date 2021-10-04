/*
 * @Author: 王教鼎
 * @Date: 2021/10/4 5:15 下午
 * @Description: 程序清单11.19
 */

#ifndef LEARN_CPP_STONEWT1_H
#define LEARN_CPP_STONEWT1_H

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int () const;
    operator double() const;
};

#endif //LEARN_CPP_STONEWT1_H
