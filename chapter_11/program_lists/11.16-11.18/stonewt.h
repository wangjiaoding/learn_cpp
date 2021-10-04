/*
 * @Author: 王教鼎
 * @Date: 2021/10/4 12:06 下午
 * @Description: 程序清单11.16
 */

#ifndef LEARN_CPP_STONEWT_H
#define LEARN_CPP_STONEWT_H

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
};

#endif //LEARN_CPP_STONEWT_H
