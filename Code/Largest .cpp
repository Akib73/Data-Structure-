#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int Array[n];
    for(int i=0; i<n; i++)
    {

        cout<<"Enter"<<i<<"Index Element:";
        cin>>Array[i];
    }
    int Max1=Array[0];
    int Max2=Array[0];
    for(int i=1; i<n; i++)

    {
        if(Max1<Array[i])
        {
            Max1=Array[i];

        }


    }
    for(int i=1; i<n; i++)

    {
        if(Max2<Array[i] && Array[i]!=Max1)
        {
            Max2=Array[i];

        }


    }
    cout<<"largest tow number :"<<"\n 1st largest Number is :"<<Max1;
    cout<<"\n 2nd largest Number is:"<<Max2;
}
