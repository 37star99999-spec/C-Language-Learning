#include <stdio.h>

int main(void)
{
    int num = 5;
    num += 5;           // num = 10
    int y = 5;
    num *= y + 10;      // num = 10 * (5 + 10) = 150

    printf("%d\n", num);
    return 0;
}
