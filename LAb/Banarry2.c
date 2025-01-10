#include<stdio.h>
int main ()
{
    printf("Enter Total index Number:");
    int N;
    scanf("%d",&N);
    int Array[N];
    int i;
    int T;
    int j;
    int loc=0;
    int beg=0;
    int end=N-1;
    int mid=(beg+end)/2;
    int flag=0;
    int s;
  for (i=0; i<N; i++)
    {
        printf("Enter %d Index Element:",i);
        scanf("%d",&Array[i]);
    }

    for(i=0; i<N-1; i++)
    {
        for (j=0; j<N-i-1; j++)
        {
            if(Array[j]<Array[j+1])
            {
                    T=Array[j+1];
                Array[j+1]=Array[j];
                Array[j]=T;


            }

        }

    }
    printf("After Sorting Array:\n");
    for(i=0; i<N; i++)
    {
       printf("%d Index Element is:",i);
        printf("%d\n",Array[i]);
    }
    printf("Enter Search element :");
    scanf("%d",&s);
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
              beg=mid+1;

        }
        else if(s>Array[mid])
        {
          end=mid-1;
        }
        mid=(beg+end)/2;
    }
    if(flag==0)
    {
        printf ("%d is Not found",s);

    }


}




