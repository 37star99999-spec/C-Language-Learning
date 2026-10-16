#include <stdio.h>

int main(void)
{
    float b = 1 / 3.0;
    double c = 1 / 9.0;
    float d;

    d = b + c;
    printf("%.7f\n", d);
    return 0;
}
