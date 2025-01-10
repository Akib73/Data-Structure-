#include<iostream>
using namespace std;
int  main ()
{

    int  arry[5];
    int  s;
    int e=0;
    int od=0;

    for ( int i=0; i<5; i++)
    {

        cout<<"Enter "<<i<<"Index Element:";
        cin>>arry[i];
    }
    int Max=arry[0];

    for(int i=0; i<5; i++)
    {

        if (arry[i]%2==0)
        {
          e=e+1;

        }
        else
        {
            od=od+1;
        }

    }

cout<<"Total Even number="<<e<<endl;
cout<<"Total Odd number=r"<<od;


}

