#include<stdio.h>
int main ()
{
    int Arry[5];
    int i;
    int n;
    for (i=0; i<5; i++)
    {
        printf("Enter %d Element:",i+1);
        scanf("%d",&n);
        Arry [i]=n;

    }
    printf("Display Array Elements:\n");
    for(i=0;i<5; i++)
    {
        printf("%d\n",Arry[i]);
    }

}
