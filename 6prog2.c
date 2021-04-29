#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct str{
    char cont[100];
}a,b;
void main()
{   int f=0;
    printf("Enter String 1");
    gets(a.cont);
    printf("Enter String 2");
    gets(b.cont);
    if(strlen(a.cont)!=strlen(b.cont))
    {
        printf("Not an anagram");
        return;
    }
    else
    {
        for(int i=0;i<strlen(a.cont);i++)
        {
            char c=a.cont[i];
            int j=0,k=0;
            for(int h=0;h<strlen(a.cont);h++)
            {
                if(a.cont[h]==c)
                    j++;
            }
            for(int h=0;h<strlen(a.cont);h++)
            {
                if(b.cont[h]==c)
                    k++;
            }
            if(j!=k)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
        printf("They are anagrams");
    else
        printf("They are not anagrams");
}
