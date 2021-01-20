#include<stdio.h>
#include<string.h>

struct books
{ 
	char title[50];
	char author[100];
	char subject[100];
	int book_id;
} ;

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
       printf("Book1 title = %s\n",book1.title);
       printf("Book1 author = %s\n",book1.author);
       printf("Book1 subject = %s\n",book1.subject);
       printf("Book1 id = %d\n\n",book1.book_id);

       printf("Book2 title = %s\n",book2.title);
       printf("Book2 author = %s\n",book2.author);
       printf("Book2 subject = %s\n",book2.subject);
       printf("Book2 id = %d\n\n",book2.book_id);

       return 0;
}

 
