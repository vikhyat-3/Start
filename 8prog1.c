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
    struct book a;
    printf("Enter the book_id: ");
    scanf("%d",&a.book_id);

    printf("Enter the book_title: ");
    scanf("%s",a.book_title);

    printf("Enter the book_author: ");
    scanf("%s",a.author);

    printf("Enter the book_price: ");
    scanf("%lf",&a.price);
    printf("The details are :\nID: %d\nTitle: %s\nAuthor: %s\nPrice: %lf\n",a.book_id,a.book_title,a.author,a.price);
}
