#include<stdio.h>
#include<string.h>

struct books
{ 
	char title[109];
	char author[200];
	char subject[80];
	int book_id;
} ;

void printbook(struct books *book);

int main()
{ 
	struct books book1,book2;

       /*specification of book1*/
        strcpy(book1.title,"Rimjhim");
        strcpy(book1.author,"kya pata yrr");
        strcpy(book1.subject,"hindi");
        book1.book_id = 123457;

	/*specification of book2*/
       strcpy(book2.title,"Honeycomb");
        strcpy(book2.author,"nhi pata yrr");
         strcpy(book2.subject,"Angrezi");
        book2.book_id = 123456;

        printf("Book details\n");
	printbook(&book1);

	printbook (&book2);

	return 0;
} 

void printbook (struct books *book) { 
	printf("Book title : %s\n", book->title);
	printf("Book author: %s\n",book->author);
	printf("Book Subject : %s\n",book->subject);
	printf("Book id: %d\n",book->book_id);
}
