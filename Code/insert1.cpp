#include<iostream>
using namespace std;
int  main ()
{

    char arry[5];
    char  s;
    char l;
    int flag=0;

    for ( int i=0; i<5; i++)
    {

        cout<<"Enter "<<i<<"Index Element:";
        cin>>arry[i];
    }
    cout<<"Enter 1st element :";
    cin>> s;
     cout<<"Enter Last element :";
    cin>>l;
 arry[0]=s;
 arry[4]=l;
  cout<<"Update array is:"<<endl;
     for ( int i=0; i<5; i++)
    {


        cout<<arry[i];
    }


}


