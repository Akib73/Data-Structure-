#include <stdio.h>
int main ()
{
    int n;
    int search;
    int flag=0;
    printf("Enter  Array Size:");
    scanf("%d",&n);
    int Arry[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter Index %d Element:",i);
        scanf("%d",&Arry[i]);
    }
    printf("Enter Search Element:");
    scanf("%d",&search);
    for (int i=0; i<n; i++)
    {

        if (search==Arry[i])
        {
            printf("Element is found  in %d index",i);
            flag++;
            break;
        }
    }
    if (flag==0)
    {
        printf("Item not found ");
        Arry[n-1]=search;
    }
    printf("After inserting searching element:\n");
      for (int i=0; i<n; i++)
    {
        printf("Index %d Element is :",i);
        printf("%d\n",Arry[i]);
    }



}
