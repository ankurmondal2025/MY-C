#include<stdio.h>
int main()
{
    int start,end;
    printf("enter start number: ");
    scanf("%d", &start);

     printf("enter end number: ");
    scanf("%d", &end);

    while (start<=end)
    {
        if(start % 2 == 0)
        {
            printf("%d\n", start);
        }
        start++;
    }
    



    return 0;
}
