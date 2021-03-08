#include<stdio.h>
#include<stdlib.h>

void bubblesort (int a[],int n)
{
        int i,j,temp;
        for(j=1;j<n;j++)
        {
                for(i=0;i<n-j;i++)
                {
                   if(a[i]>a[i+1])
                   {
                        temp= a[i];
                       a[i]=a[i+1];
                       a[i+1]=temp;
                   }
                }
        }
}

int main()
{
        int i,n,a[10];
        printf("Enter number of elements\t");
        scanf("%d",&n);
        printf("Enter the elements to be sorted\n");
        for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }

        bubblesort(a,n);

        printf("Sorted elements are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
                                                                   return 0;
}
