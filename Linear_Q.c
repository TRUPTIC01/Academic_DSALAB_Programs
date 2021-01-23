#include <stdio.h>
 #define max 6
void insert();
void delete();
void display();
 int choice, front=-1 ,rear=-1,i=0,q[100],item;
int  main()
{
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&choice);
         switch(choice)
       {
                case 1: insert(); main(); break;  
		case 2: delete(); main(); break;
                case 3: display(); main(); break;
		case 4: printf("\nPress any key to EXIT."); break;
                default : printf("\nInvalid Response!\n");
      }
 
        return 0;
  }
 void insert()
  {
          if(rear==max-1)
        printf("\nOverFlow!\n");
         else     
	 {
          printf("\nEnter a value:");
        scanf("%d",&item);
          q[++rear]=item;
 
       }
  }
 void delete()
  {
          if((front==-1 && rear==-1)||(front>=rear))
          printf("\nQueue is Empty!\n");
          else
       {
          item= q[++front];
         printf("\nDeleted Value=%d",item);
       }
  }
  void display()
  {
        int i;
         if((front==-1 && rear==-1)||(front>=rear))                                 printf("\nQueue is Empty!\n");
         else
       {
         for(i=front+1; i<=rear; i++)
        printf(" %d ",q[i]);
       }
 
  }

