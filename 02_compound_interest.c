#include <stdio.h>
#include <math.h>

int main(void)
{
    double dep, cap, rate = 0.0;
    int n;

    printf("请输入本金：\n");
    scanf("%lf", &cap);
    printf("请输入存放年限：\n");
    scanf("%d", &n);

    // 按课堂例子的年限与年利率进行匹配
    if (n == 1) {
        rate = 0.0225;
    } else if (n == 2) {
        rate = 0.0243;
    } else if (n == 3) {
        rate = 0.0270;
    } else if (n == 5) {
        rate = 0.0288;
    } else if (n == 8) {
        rate = 0.0300;
    } else {
        printf("暂不支持该存放年限\n");
        return 0;
    }

    dep = cap * pow(1.0 + rate, n);
    printf("利息与本金合计：%.2f\n", dep);
    return 0;
}
