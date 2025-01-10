#include <iostream>
using namespace std;
int main()
{

    int n ;
    cout<<"Enter arrey size:";
    cin>>n;
    int  arry[n];
    int sum;
    for(int i =0; i<n; i++)

    {
        cout<<"Enter "<<i<<"index element:";
        cin>>arry[n];
    }
    int i,j;
    cout<<"Unique element:";
    for( i =0; i<n; i++)

    {
         sum=0;
        for(j=0; j<i; j++)
        {


            if(arry[i]==arry[j])
            {
             sum=sum+1;


            }
            }
            for(int k=i+1; k<n; k++)
            {
             if(arry[i]==arry[k])
            {
             sum=sum+1;


            }
            }




        if (sum==0)
        {
            cout<<arry[i];
        }
    }
    }


