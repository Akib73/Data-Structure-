#include<stdio.h>
int main ()
{

    int n;
    printf("Enter Arry Size:");
    scanf("%d",&n);
    int sum=0;
    int arry[n];

    for (int i=0; i<n; i++)
    {

        printf("Enter index number %d:",i);
        scanf("%d",&arry[i]);


    }
    int i;
    int j;
     for( i =0; i<n; i++)

    {

        for(j=i+1; j<n; j++)
        {

            if(arry[i]==arry[j])
           {
                sum=sum+1;
                break;
            }


            }


    }
    printf("Total Duplicate Element is:%d",sum);
    }

