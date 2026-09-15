#include<stdio.h>
int main()
{
    int a,b,c;
    float avarage;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avarage=(a+b+c)/3.00;
    printf("avarage= %f",avarage);
    return 0;
}