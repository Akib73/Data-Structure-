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
    int min;

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
    for(i=0; i<N; i++)
    {
        min=i;
        for (j=i+1; j<N; j++)
        {

            if(Array[j]<Array[min])
            {
                 min=j;


            }

        }
        if(min!=i)
        {

             T=Array[i];
                Array[i]=Array[min];
                Array[min]=T;
        }
    }
     printf("After Sorting Array:\n");
    for(i=0; i<N; i++)
    {
       printf("%d Index Element is:",i);
        printf("%d\n",Array[i]);
    }
}



