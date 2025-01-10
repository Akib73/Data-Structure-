#include<stdio.h>
int main ()
{

    int n;
    printf("Enter Arry Size:");
    scanf("%d",&n);
    int sum;
    int arry[n];

    for (int i=0; i<n; i++)
    {

        printf("Enter index numebr %d",i);
        scanf("%d",&arry[i]);


    }
    int i;
    int j;
     for( i =0; i<n; i++)

    {
         sum=0;
        for(j=0; j<i; j++)
        {

            if(i!=j)
            {




            if(arry[i]==arry[j])
            {
             sum=sum+1;
            }
            }

        }







        if (sum==0)
        {
            printf("%d",arry[i]);
        }
    }
    }

