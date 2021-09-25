/*
 * @Author: 王教鼎
 * @Date: 2021/9/25 6:48 下午
 * @Description: 程序清单10.10
 */

#ifndef LEARN_CPP_STACK_H
#define LEARN_CPP_STACK_H

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif //LEARN_CPP_STACK_H
