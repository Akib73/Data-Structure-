#include<iostream>
using namespace std;
void quicksort(int number[],int first,int last){

int i, j, pivot, temp;

if(first<last){

pivot=first;

i=first;

j=last;

while(i<j){

while(number[i]<=number[pivot]&&i<last)

i++;

while(number[j]>number[pivot])

j--;

if(i<j){

temp=number[i];

number[i]=number[j];

number[j]=temp;

}

}

temp=number[pivot];

number[pivot]=number[j];

number[j]=temp;

quicksort(number,first,j-1);

quicksort(number,j+1,last);

}

}

void print(int A[],int n1)
{
    for(int i=0; i<n1; i++)
    {
        cout<<"\n";
        cout<<i<<"Index Element is"<<A[i];
    }
}
int main ()
{
    int n;
    cout<<"Enter total Element:";
    cin>>n;
    int Arry[n];


    int loc;

    for (int i=0; i<n; i++)
    {

        cout <<"Enter"<<i<<"index element:";
        cin>>Arry[i];
    }
    cout<<"Before  Sorting Array:\n";
    print(Arry,n);
  quicksort(Arry,0,n-1);
    cout<<"\nAfter  Sorting Array:\n";
    print(Arry,n);




}


