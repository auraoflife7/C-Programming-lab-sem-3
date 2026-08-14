#include <stdio.h>

struct Book
{
    int bookid;
    char bookname[100];
    char authorname[100];
    float price;
    int year;
    int pages;
    char publisher[100];
};

int main()
{
    struct Book b1;
    printf("Enter book id: ");
    scanf("%d", &b1.bookid);
    printf("Enter book name: ");
    scanf("%s", &b1.bookname);
    printf("Enter author name: ");
    scanf("%s", &b1.authorname);
    printf("Enter price: ");
    scanf("%f", &b1.price);
    printf("Enter year: ");
    scanf("%d", &b1.year);
    printf("Enter pages: ");
    scanf("%d", &b1.pages);
    printf("Enter publisher: ");
    scanf("%s", &b1.publisher);

    printf("\nBook ID: %d\n", b1.bookid);
    printf("Book Name: %s\n", b1.bookname);
    printf("Author Name: %s\n", b1.authorname);
    printf("Price: %.2f\n", b1.price);
    printf("Year: %d\n", b1.year);
    printf("Pages: %d\n", b1.pages);
    printf("Publisher: %s\n", b1.publisher);

    return 0;
}