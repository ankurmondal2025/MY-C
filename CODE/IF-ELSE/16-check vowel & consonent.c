  #include<stdio.h>
int main()
{
    char alphabet;
    printf("enter the alphabet: ");
    scanf("%c", &alphabet);
    if(alphabet=='a'||alphabet=='e'|| alphabet=='i'|| alphabet=='o'|| alphabet=='u'|| 
    alphabet=='A'|| alphabet=='E'|| alphabet=='I'|| alphabet=='O'|| alphabet=='U' )
    {
    printf("alphabet is vowel");
    }
         else
    {
        printf("alphabet is consonant");
    }

    
 return 0;
        }
