#include<iostream>
using namespace std;
int  main ()
{

    char arry[5];
    char  s;
    int flag=0;

    for ( int i=0; i<5; i++)
    {

        cout<<"Enter "<<i<<"Index Element:";
        cin>>arry[i];
    }
    cout<<"Search Element:";
    cin>> s;
    for (int i=0; i<5; i++)
    {

        if (s==arry[i])
        {
            cout<<"Element is found in index"<<i ;
            flag=1;
            break;
        }

    }
      if(flag==0)
        {
            cout<<"Element is not found";
        }


}
