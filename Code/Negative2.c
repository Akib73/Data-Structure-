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

        printf("Enter index number %d:",i);
        scanf("%d",&arry[i]);


    }
    int i;
   printf("All negative numbers are:\n");
     for( i =0; i<n; i++)

    {


    if(arry[i]<0)
    {
        printf("%d\n",arry[i]);
    }


}
}
