#include <stdio.h>
#include <math.h>
void main()
{
    for(;;){
    int n;
    printf("\nEnter number: ");
    scanf("%d",&n);
    int p=sqrt(n);
    int q=p+1;
    ((p*q)==n)?printf("%d is a pronic number",n):printf("%d is not a pronic number",n);
    }
}
