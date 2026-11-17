  #include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers: ");
    scanf("%d%d", &a,&b);
    if(a>b)
    {
    printf("a is largest number");
    }
    else if(b>a)
    {
    printf("b is largest number");
    }
    else
    {
        printf("a and b value is same");
    }

    
 return 0;

}
