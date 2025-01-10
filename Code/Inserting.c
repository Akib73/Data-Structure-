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
    printf("Before Inserting new element in array\n");
     for (i=0; i<n; i++)

    {
        printf("%d index element is:",i);
        printf("%d\n",Array[i]);
    }
      int k;
    printf("Enter the index number for inserting element:");
   scanf("%d",&k);
   int a;
   printf("Enter new inserting iteam:");
   scanf("%d",&a);
    int j=n;
    while(k<=j)
    {
        Array[j+1]=Array[j];
        j=j-1;

    }
    Array[k]=a;
    n=n+1;
    printf("After inserting new element in Array:\n");
    for (i=0; i<n; i++)
    {
        printf("%d element is :",i);
        printf("%d\n",Array[i]);
    }

}
