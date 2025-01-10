#include <stdio.h>
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
    int loc=0;
    int beg=0;
    int end=n-1;
    int mid=(beg+end)/2;
    int flag=0;

    for (i=beg; beg<=end; i++)
    {
        if (s==Array[mid])
        {
            printf("%d is found in index ",s);
            loc=mid;
            printf("%d",mid);
            flag=1;
            break;
        }
        else if(s<Array[mid])
        {
            end=mid-1;
        }
        else if(s>Array[mid])
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(flag==0)
    {
        printf ("%d is Not found",s);

    }

}




