#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    float profit=sp-cp;
    float pp=(profit*100.0)/cp;
    printf("%.2f",pp);
}