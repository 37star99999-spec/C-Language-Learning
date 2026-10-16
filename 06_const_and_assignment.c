#include <stdio.h>

int main(void)
{
    int x = 5;
    x = x + 10;
    printf("x=%d\n", x);

    const int s = 10;
    printf("s=%d\n", s);
    return 0;
}
