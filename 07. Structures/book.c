// 4. WAP in c to store the details of books such as Id, ISBN, title, publisher and price.
#include <stdio.h>
#include <string.h>

typedef struct
{                        // Define a structure for book information
     int id;             // Book ID
     char isbn[20];      // Book ISBN
     char title[50];     // Book title
     char publisher[50]; // Publisher name
     float price;        // Book price
} Book;

void inputBook(Book *book)
{ // Function to input book details
     printf("Enter book ID: ");
     scanf("%d", &book->id);

     printf("Enter book ISBN: ");
     scanf("%s", book->isbn);

     printf("Enter book title: ");
     scanf(" %[^\n]s", book->title); // Allow spaces in the title

     printf("Enter publisher: ");
     scanf(" %[^\n]s", book->publisher); // Allow spaces in the publisher's name

     printf("Enter book price: ");
     scanf("%f", &book->price);
}
void displayBook(Book book)
{ // Function to display book details
     printf("\nBook ID: %d\n", book.id);
     printf("ISBN: %s\n", book.isbn);
     printf("Title: %s\n", book.title);
     printf("Publisher: %s\n", book.publisher);
     printf("Price: %.2f\n", book.price);
}
void main()
{
     int n; // Number of books to be entered

     printf("Enter the number of books: ");
     scanf("%d", &n);

     Book books[n]; // Array to store n books

     for (int i = 0; i < n; i++) // Input details for each book
     {
          printf("\nEnter details for book #%d:\n", i + 1);
          inputBook(&books[i]);
     }

     printf("\nBook details:\n"); // Display details of all books
     for (int i = 0; i < n; i++)
     {
          displayBook(books[i]);
     }
}


