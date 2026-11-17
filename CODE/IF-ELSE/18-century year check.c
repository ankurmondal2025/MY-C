  #include<stdio.h>
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year%100==0)
    {
    printf("century year");
    }
    else{
        printf("not a century year");
    }
    
 return 0;
        }
