#include<stdio.h>
int main()
{
    int number,digit,reverse;
    printf("enter the number: ");
    scanf("%d", &number);

    while (number != 0)
    {
       digit=number%10;
       reverse=reverse*10+digit;
       number=number/10;
    }
    printf("%d",reverse);

      return 0;
}
