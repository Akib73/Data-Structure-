#include<iostream>
using namespace std;
int  main ()
{

    int  arry[5];

    int even[5];
    int od[5];

    for ( int i=0; i<5; i++)
    {

        cout<<"Enter "<<i<<"Index Element:";
        cin>>arry[i];
    }

            int s=0;
              int j=0;

    for(int i=0; i<5; i++)
    {

        if (arry[i]%2==0)
        {
          even[s]=arry[i];
          s=s+1;

        }

        else
        {
            od[j]=arry[i];
            j=j+1;
        }

    }
    cout<<"All Even Number in different array;"<<endl;
     for ( int i=0; i<s; i++)
    {

       cout<<endl;
        cout<<even[i];
    }
    cout<<endl<<"All ODD Number in different array;"<<endl;
      for ( int i=0; i<j; i++)
    {
      cout<<endl;

        cout<<od[i];
    }




}
