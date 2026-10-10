#include <stdio.h>

int main(void)
{
    int a;
    float b;
    float c;

    printf("请输入一个整数、一个小数（用空格隔开）：");
    scanf("%d %f", &a, &b);

    printf("a = %d, b = %f\n", a, b);

    c = a * b;
    printf("c = %.2f\n", c);

    return 0;
}