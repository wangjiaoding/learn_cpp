/*
 * @Author: 王教鼎
 * @Date: 2021/9/13 11:23 下午
 * @Description: 程序清单7.1
 */
#include <iostream>

void simple();

int main()
{
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}
