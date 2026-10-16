#include <stdio.h>

int main(void)
{
    int num, ge, shi, bai;
    printf("请输入一个三位正整数：");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("请输入 100 到 999 之间的整数\n");
        return 0;
    }

    ge = num % 10;
    shi = (num / 10) % 10;
    bai = (num / 100) % 10;

    printf("个位是：%d\n", ge);
    printf("十位是：%d\n", shi);
    printf("百位是：%d\n", bai);
    return 0;
}
