#include <stdio.h>
void main()
{
    char *a;
    a=(char *)malloc(sizeof(char)*10);
    accept(a);
    display(a);
}
void accept(char *a)
{
    printf("Enter string\n");
    scanf("%s",a);
}
void display(char *a)
{
    printf("%s",a);
}

