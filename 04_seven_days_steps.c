#include <stdio.h>

int main(void)
{
    int a = 10000;
    int b = 12000;
    int c = 7500;
    int d = 32000;
    int e = 2000;
    int f = 10000;
    int g = 4000;

    float steps;
    steps = (a+b+c+d+e+f+g) / 7.0f;

    printf("10月1日，步数：%d\n", a);
    printf("10月2日，步数：%d\n", b);
    printf("10月3日，步数：%d\n", c);
    printf("10月4日，步数：%d\n", d);
    printf("10月5日，步数：%d\n", e);
    printf("10月6日，步数：%d\n", f);
    printf("10月7日，步数：%d\n", g);

    printf("-------------------------\n");
    printf("七天的平均步数：%.2f\n", steps);

    return 0;
}