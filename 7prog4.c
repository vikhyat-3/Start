#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main()
{
    char a[30];
    int min,max;
    printf("\nEnter string: ");
    gets(a);
    if(strcmp(a,"done")!=0)
    {
        if(atoi1(a)!=-1)
        {
            min=atoi1(a);
            max=atoi1(a);
        }
    }
    while(strcmp(a,"done")!=0)
    {
        printf("\nEnter string: ");
        gets(a);
        if(atoi1(a)==-1)
            continue;
        if(min>atoi1(a))
            min=atoi1(a);
        if(max<atoi1(a))
            max=atoi1(a);
    }
    printf("\nThe smallest is %d and the largest is %d\n",min,max);

}
int atoi1(char *a)
{
    int b;
    b=atoi(a);
    if(b==0)
        return -1;
    else
        return b;
}
