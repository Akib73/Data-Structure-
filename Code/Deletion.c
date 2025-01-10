#include<stdio.h>
int main ()
{
    int n;
    printf ("Enter Total Array Element :");
    scanf("%d",&n);
    int Array[n];
    int i;
    for (i=0;i<n; i++)
    {
        printf("Enter %d index Element:",i);
        scanf("%d",&Array[i]);

    }
    printf("Before Deleting  element in array\n");
     for (i=0; i<n; i++)

    {
        printf("%d index element is:",i);
        printf("%d\n",Array[i]);
    }
      int k;
    printf("Enter the index number for Deleting element:");
   scanf("%d",&k);

    int j=k;
    while(j<n-1)
    {
        Array[j]=Array[j+1];
        j=j+1;

    }
n=n-1;
    printf("After Deleting new element in Array:\n");
    for (i=0; i<n; i++)
    {
        printf("%d element is :",i);
        printf("%d\n",Array[i]);
    }

}
