#include<stdio.h>
#include<stdlib.h>
int top=-1;
#define size 5
 int Array[size];
int main()
{
MainManu(Array[size]);
}

void Push();
void pop();
void show();
void Top();
void End();
void MainManu();
void Push()
{
    system("cls");
    int e;
    if(top==size)
    {
        printf("Stack is overflow");
        printf("Press any key top continue ");
          fflush(stdin);
          getchar();
           MainManu();
           }
    else
    {
           top=top+1;
        printf("Enter %d Index Element:",top);
        scanf("%d",&e);
        Array[top]=e;
           printf("Press any key top continue ");
          fflush(stdin);
          getchar();
       MainManu();
    }

}

void show()
{
            system("cls");
             if(top==-1)
    {
        printf("Stack is Underflow");
        printf("Press any key top continue ");
          fflush(stdin);
          getchar();
           MainManu();

    }
    for(int i=0; i<=top; i++)
    {
        printf("%d Index Element is:",i);
        printf("%d\n",Array[i]);


    }
      printf("Press any key top continue ");
      fflush(stdin);
       getchar();
        MainManu();


}

    void End()
    {

        exit(0);
    }
    void MainManu()
    {
        system("cls");

        int num;
        printf("Main Menu\n");
        printf("1.Insert Element(Push Operation)\n");

         printf("2.Show Operation\n");

        printf("4.End\n");
        scanf("%d",&num);
        switch(num)
        {
        case 1:

                Push();
                break;


        case 2:
            show ();
            break;

        case 4:
            End();
            break;
        default:
            printf("Press any key top continue ");

            fflush(stdin);
       getchar();
        MainManu();

        }
}

