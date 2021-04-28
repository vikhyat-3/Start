#include <stdio.h>
#include <string.h>
void main()
{
    char a[30];
    int h=0,i=0,j=0;
    printf("Enter string\n");
    gets(a);
    i=strlen(a);
    printf("Output is:\n");
    for(;j<i;j++)
    {
        if(a[j]==32 && a[j-1]!=32)
        {
            h++;
        }
    }
    if(a[j-1]!=32)
        h++;
    printf("%d",h);

}
