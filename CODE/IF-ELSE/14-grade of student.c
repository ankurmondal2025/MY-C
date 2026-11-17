  #include<stdio.h>
int main()
{
    float marks;
    printf("enter the marks: ");
    scanf("%f", &marks);

    if(marks<=100 && marks>=90)
    {
    printf("GRADE=A");
    }
    else if(marks<=90 && marks>=80)
    {
        printf("GRADE=B");
    }
    else if(marks<=80 && marks>=70)
    {
        printf("GRADE=c");
    }
    else if(marks<=70 && marks>=60)
    {
        printf("GRADE=D");
    }
    else if(marks<=60 && marks>=50)
    {
        printf("GRADE=E");
    }
    else
    {
        printf("GRADE=F");
    }

    
 return 0;

} 
