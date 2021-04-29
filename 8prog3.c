#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;
}

 void read(struct book* a)
{
     printf("Enter the title, author name, price and number of pages in order");
     scanf("%s%s%f%d",a->title,a->author,&a->price,&a->no_pages);
}

void print(struct book* a)
{
    printf("The book details are\n");
    printf("\n%s\t%s\t%f\t%d",a->title,a->author,a->price,a->no_pages);
}
