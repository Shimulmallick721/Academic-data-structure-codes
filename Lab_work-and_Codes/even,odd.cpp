#include<iostream>
using namespace std;

int main()
{
    int arr[10]= {12,32,43,1,54,53,15,64,3,13};

    int i,even, odd;

    even = 0;
    odd  = 0;

    cout<<"print even odd";
    for(i=0; i<10; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout<<"This is an even number :"<<arr[i]<<endl;
            even++;
        }
        else
        {
            cout<<"This is an odd number :"<<arr[i]<<endl;
            odd++;
        }
    }

    cout<<"Total odd elements : "<<odd<<endl;
    cout<<"Total even elements : "<<even<<endl;

    return 0;
}
