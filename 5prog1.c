#include <stdio.h>
void main()
{
    char *a;
    a=(char *)malloc(sizeof(char)*10);
    printf("Enter string\n");
    scanf("%s",a);
    printf("\n%s",a);
}
