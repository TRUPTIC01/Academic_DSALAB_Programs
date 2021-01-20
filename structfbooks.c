#include<stdio.h>
#include<string.h>

struct books
{ 
	char title[50];
	char author[100];
	char subject[100];
	int book_id;
} ;

void printbook (struct books book);

int main()
{ 
	struct books book1,book2;

	/*specification of book1*/
	strcpy(book1.title,"If tomorrow comes");
	strcpy(book1.author,"Shidney Sheldon");
	strcpy(book1.subject,"Crime fiction");
	book1.book_id= 330290959;

	/*Specifation of book2*/
	strcpy(book2.title,"Autobiography of yogi");
        strcpy(book2.author,"Paramhansa Yogananda");
        strcpy(book2.subject,"Autobiography");
       book2.book_id= 47000544;

       printf("Book Details\n\n");
       printbook(book1);

       printbook(book2);

       return 0;
}

void printbook (struct books book)  { 
       printf("Book title = %s\n",book.title);
       printf("Book author = %s\n",book.author);
       printf("Book subject = %s\n",book.subject);
       printf("Book id = %d\n\n",book.book_id);
}
 
