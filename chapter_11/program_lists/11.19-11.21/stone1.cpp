/*
 * @Author: 王教鼎
 * @Date: 2021/10/4 5:21 下午
 * @Description: 程序清单11.21
 */
#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    Stonewt popping(9, 2.8);
    double p_wt = popping;
    cout << "Convert to double => ";
    cout << "Poppings: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppings: " << int (popping) << " pounds.\n";
    return 0;
}
