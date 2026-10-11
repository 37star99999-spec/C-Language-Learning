#include<stdio.h>
int main(void)
{
    int k;
    printf("请输入限定金额：");
    scanf("%d",&k);
    int sum=0;
    int d=0;
    while(sum<k)
    {
        d++;
        sum=sum+d*2;




    }
    printf("d=%d",d);
    return 0;



}