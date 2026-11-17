  #include<stdio.h>
int main()
{
    char alphabet;
    printf("enter the alphabet: ");
    scanf("%c", &alphabet);
    if(alphabet>='A' && alphabet<='Z')
    {
    printf("uppercase");
    }
         else if(alphabet>='a' && alphabet<='z')
         {
        printf("lowercase");
         }
    
 return 0;
        }
