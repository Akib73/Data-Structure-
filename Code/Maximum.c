#include<stdio.h>
int main ()
{

    int n;
    int i;
    int j;
    printf("Enter Total  Element number:");
    scanf("%d",&n);
    int Arry[n];
    for (i=0; i<n; i++)
    {
     printf("Enter %d index element:",i);
     scanf("%d",&Arry[i]);

    }
    int max =Arry[0];
    for (i=0; i<n; i++)
    {

        if(max<Arry[i])
        {

            max=Arry[i];
            j=i;
        }
    }
    printf("%d is Maximum number ",max);
    printf("And its index number is %d",j);
}
