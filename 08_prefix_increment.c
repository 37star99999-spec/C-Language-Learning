#include <stdio.h>

int main(void)
{
    int x = 5;
    ++x;                       // x 从 5 变成 6
    printf("%d\n", ++x);      // 先变成 7，再输出
    return 0;
}
