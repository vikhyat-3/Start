#include <stdio.h>
#include <string.h>
void main()
{
    int a[128]={0},max=0,max_index;
    char s[30];
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        int h=s[i];
        a[h]++;
    }
    max=a[0];
    max_index=0;
    for(int i=0;i<128;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
    }
    printf("\nThe most occurred character is %c which has occurred %d times ",max_index,max);
}
