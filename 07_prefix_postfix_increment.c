#include <stdio.h>

int main(void)
{
    int x = 5;
    x++;             // x 变成 6
    int y = x++;     // y 得到旧值 6，x 再变成 7
    int z = ++x;     // x 先变成 8，z 得到 8

    printf("%d,%d,%d\n", x, y, z); // 8,6,8
    return 0;
}
