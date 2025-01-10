#include<iostream>
using namespace std;
int  main ()
{

    int  arry[5];
    int  s;
    int flag=0;

    for ( int i=0; i<5; i++)
    {

        cout<<"Enter "<<i<<"Index Element:";
        cin>>arry[i];
    }
    int Max=arry[0];

    for(int i=0; i<5; i++)
    {

        if (Max<arry[i])
        {
          Max=arry[i];

        }

    }
    int Min=arry[0];
    for(int i=0; i<5; i++)
    {


      if(Min>arry[i])
        {
            Min=arry[i];
        }
}
cout<<"Max="<<Max<<endl;
cout<<"Min="<<Min;


}

