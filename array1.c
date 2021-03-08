#include<stdio.h>
#include<stdlib.h>

void create_array(int a[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}

void display_array(int a[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}

int insert(int a[],int n,int pos,int elem)
{
        int i;
        if(pos>n||pos<0)
        {
                printf("Invalid position\n");
                return n;
        }
        for(i=n-1;i>=pos;i--)
        {
                a[i+1] = a[i];                                                                                                }                                                                                                                     a[pos] = elem;
        return n++;
}

int delete(int a[],int n,int pos,int elem)
{
        int i;
        if(pos>=n||pos<0)
        {
                printf("Position Invalid\n");
                return n;
        }
        printf("Element deleted=%d\n",a[pos]);
        for(i=pos+1;i<n;i++)
        {
                a[i-1]= a[i];
        }
        return n--;
}

int main()
{
        int choice,n,elem,pos,a[10];
        printf(" Array Menu\n");
        printf("1. Create\t 2.Insert\n 3.Delete\t4.Display\t5.Exit\n");
        for(;;)
        {
                printf("Enter choice\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1: printf("Enter number of elements\t");
                                scanf("%d",&n);
                                create_array(a,n);
                                break;

                        case 2: printf("Enter element to be inserted\t");
                                scanf("%d",&elem);
                                printf("Enter position\t");
                                scanf("%d",&pos);
                                n=insert(a,n,pos,elem);
                                break;
                        case 3: printf("Enter position\t");
                                scanf("%d",&pos);
                                n=delete(a,n,pos,elem);
                                break;
                        case 4: printf("Contents of array are:\n");
                                display_array(a,n);
                                break;
                        case 5: exit(0);
                }
        }
        return 0;
}
