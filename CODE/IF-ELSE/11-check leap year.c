  #include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year%400==0)
    {
    printf("the year is leep year");
    }
    else if(year%4==0)
    {
        printf("the year is leep year");
    }
    else
    {
        printf("the year is not leep year");
    }

    
 return 0;

}
