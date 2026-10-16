#include <stdio.h>

#define PI 3.1415926

int main(void)
{
    float r;
    double area;

    printf("请输入圆的半径：");
    scanf("%f", &r);

    area = PI * r * r;
    printf("圆的面积为：%.2f\n", area);
    return 0;
}
