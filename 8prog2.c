#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    int book_id;
    char book_title[20];
    char author[20];
    double price;
};
void main()
{
    struct book a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter details of Book %d\n",i+1);
        printf("Enter the book_id: ");
        scanf("%d",&a[i].book_id);

        printf("Enter the book_title: ");
        scanf("%s",a[i].book_title);

        printf("Enter the book_author: ");
        scanf("%s",a[i].author);

        printf("Enter the book_price: ");
        scanf("%lf",&a[i].price);
        printf("\n\n");
    }
    char title[20];
    printf("%Enter title to update price ");
    scanf("%s",title);
    for(int i=0;i<5;i++)
    {
        if(strcmp(a[i].book_title,title)==0)
        {
            printf("\n Entry found. Enter new price of book: \n");
            scanf("%lf",&a[i].price);
            printf("Successfully updated\n");
            break;
        }
        else
        {
            printf("No record found");

        }
    }
    printf("The updated values are: ");
    for(int i=0;i<5;i++)
    {
        printf("The details are :\nID: %d\nTitle: %s\nAuthor: %s\nPrice: %lf\n",a[i].book_id,a[i].book_title,a[i].author,a[i].price);
    }
}
