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
  for (i=0; i<N; i++)
    {
        printf("Enter %d Index Element:",i);
        scanf("%d",&Array[i]);
    }
    printf("Before Sorting Array:\n");
    for(i=0; i<N; i++)
    {
        printf("%d Index Element is:",i);
        printf("%d\n",Array[i]);
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
}



