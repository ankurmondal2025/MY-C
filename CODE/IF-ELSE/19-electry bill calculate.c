  #include<stdio.h>
int main()
{
    int unit;
    float bill;
    printf("enter the unit: ");
    scanf("%d", &unit);
    if(unit<=100)
    {
    bill==(unit*5);
    }
    else (unit>=100)
    {
        bill==(100*5)+((unit-100)*8);
        printf("bill=%.2f", bill);
    }
    
 return 0;
 }
