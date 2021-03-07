#include<stdio.h>
#include<stdlib.h>
struct node{ 
	int info;
	struct node*link;
       } ;
int main()
{       
	node head,ptr;
	head= reverse(head);
	ptr = head;
	while(ptr!=NULL)
	{ 
		printf("%d\n",ptr->info);
		ptr=ptr->link;
	} 
	return 0;
} 

struct node* reverse(struct node *head){
	struct node *prev= NULL;
	struct node *head= NULL;
	
	while(head!=NULL){ 
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
	} 
	head=prev;
	return head;
}

