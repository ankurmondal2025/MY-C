  #include<stdio.h>
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    if(number>0)
    {
    printf("the number is possitive");
    }
    else if (number<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }

    
 return 0;

}
