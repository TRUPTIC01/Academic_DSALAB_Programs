#include<stdio.h>

int linearsearch(int key,int a[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                if(key==a[i])
                return i;
        }
        return -1;
}

int main()
{
        int i,a[10],pos,n,key;
        printf("Enter number of elements\t");
        scanf("%d",&n);
        printf("Enter Elements\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Item to be searched\t");
        scanf("%d",&key);

        pos= linearsearch(key,a,n);

        if(pos==-1)
                printf("Item not found\n");
        else
                printf("Item found\n");
        return 0;
}
