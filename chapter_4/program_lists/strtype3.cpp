/*
 * @Author: 王教鼎
 * @Date: 2021/9/13 1:05 上午
 * @Description: 程序清单4.9
 */
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

    return 0;
}
