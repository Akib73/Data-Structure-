#include<stdio.h>
int main ()
{
    printf("Enter Total index Number:");
    int N;
    scanf("%d",&N);
    int Array[N];
    int i;
    int T;

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
    int item;
    int j;
    for(i=1; i<N; i++)
    {
        item=Array[i];
        j=i-1;
        while(j>=0 && Array[j]>item)
        {
            Array[j+1]=Array[j];
            j--;
        }
        Array[j+1]=item;

        }

     printf("After Sorting Array:\n");
    for(i=0; i<N; i++)
    {
       printf("%d Index Element is:",i);
        printf("%d\n",Array[i]);
    }
}



