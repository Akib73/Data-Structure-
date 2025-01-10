#include <stdio.h>
int main ()
{
    printf("Enter total arry element:");
    int n;
    scanf("%d",&n);
    char  Arry[n];
    int i;

    char f;
   int flag=0;
    for (i=0; i<n; i++)
    {
        printf("Enter %d index elements :",i);
        scanf(" %c",&Arry[i]);



    }
    printf("Search Character:");
    scanf(" %c",&f);
    for (i=0; i<n; i++)
    {
        if (f==Arry[i])
        {
            printf("%c is found in ",Arry[i]);
            printf("%d index",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Character   found");
    }
}

