#include <stdio.h>

int main()
{
int i=1,number,sum;
printf("enter the n: ");
scanf("%d",&number);
while (i<=number)
{
        sum=sum+i;
    i++;
}
printf("%d",sum);
   
return 0;
}
