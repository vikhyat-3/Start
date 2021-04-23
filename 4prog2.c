#include <stdio.h>
void read_arr(int a[],int n);
void print_arr(int a[],int n);
void print_odd(int a[],int n);
int main()
{
    // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    printf("Enter array elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("The  odd elements are\n");
    print_odd(arr, arr_size);
}

void read_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
}
void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}

void print_odd(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         if(a[i]%2!=0)
            printf("%d\t", a[
                   i]);
    }
}
