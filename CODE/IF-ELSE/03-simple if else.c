#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("&d",age);

    if (age>10)
    {
            printf("your age is greater than 10");
    }
    if (age%5==0)
    {
        printf("we are inside if");
    }
    return 0;
}
