#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, s, area;
    printf("请输入三角形的三条边 a,b,c：");
    scanf("%f,%f,%f", &a, &b, &c);

    // 补充输入校验，避免边长不能构成三角形时 sqrt() 计算异常
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("这些边长不能构成三角形\n");
        return 0;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area=%.2f\n", area);
    return 0;
}
