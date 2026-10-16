#include <stdio.h>

int main(void)
{
    char ch;
    printf("请输入一个大写英文字母：");
    ch = (char)getchar();

    if (ch < 'A' || ch > 'Z') {
        printf("请输入大写英文字母 A-Z\n");
        return 0;
    }

    // 课堂方法：在 ASCII 编码中，大写与小写字母相差 32
    ch = ch + 32;
    putchar(ch);
    putchar('\n');
    printf("小写字母为：%c\n", ch);
    return 0;
}
