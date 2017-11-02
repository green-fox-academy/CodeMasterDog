/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changeing or setting the Title
 *    * Changeing or setting the Author
 *    * Changeing or setting the Year of publication
 *    * Getting each of these separately by a singel function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int book_counter = 0;

typedef enum {
    ERROR, SUCCES
} RETVAL;

typedef struct {
    char title[30];
    char author[50];
    int year_of_pub;
} BOOK_DATA;

//BOOK_DATA create_book_title();

RETVAL create_book(BOOK_DATA *var, char *var_title ,char *var_author ,int var_year)
{

    if (book_counter > 9)
        return ERROR;

    strcpy(var[book_counter].title, var_title);
    strcpy(var[book_counter].author, var_author);
    var[book_counter].year_of_pub = var_year;

    book_counter++;


    return SUCCES;
}

int main()
{


    BOOK_DATA book[10];

    printf("%d\n", book[0].year_of_pub);
    RETVAL ret = create_book(book, "Harry Potter", "J. K. R." , 2005);
    if (ret == SUCCES)
        printf("%d\n", book[0].year_of_pub);
    else
        printf("We can't store more books");


    return 0;
}


