#include<stdio.h>
int main(void)
{
    int n = 0;
    double sum = 0.0;
    int k;
    printf("请输入一个整数：");
    scanf("%d",&k);
    
    while(sum<=k)
    {
        n++;
        sum+=1.0/n;
        
       


    }

    printf("n=%d",n);



    return 0;

}
    