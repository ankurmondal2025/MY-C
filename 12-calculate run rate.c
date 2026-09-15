 #include<stdio.h>
int main()
{
    int runs;
    float overs,runrate;
    printf("enter the total runs:");
    scanf("%d",&runs);
    printf("enter the total overs:");
    scanf("%f",&overs);
    runrate=(runs/overs);
    printf("runrate= %f",runrate);
    return 0;
}