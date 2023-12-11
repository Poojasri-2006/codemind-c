#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    float loss=cp-sp;
    float lp=(loss*100.0)/cp;
    printf("%.2f",lp);
}