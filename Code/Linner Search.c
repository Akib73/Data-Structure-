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
    printf("Search:");
    int s;
    scanf("%d",&s);
    int flag=0;

    for (int i=0; i<n; i++)
    {
        if (s==Array[i])
        {
            printf("%d is found in index ",s);
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf ("%d is Not found",s);
    }

}

