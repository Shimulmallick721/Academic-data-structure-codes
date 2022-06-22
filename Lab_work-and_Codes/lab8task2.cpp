#include<iostream>

using namespace std;

int main()
{
    int i,j,n,l,t,m,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter Array values :\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        m=a[i];
        l=i;
        for(j=i+1;j<n;j++)
        {
            if(m>a[j])
            {
                m=a[j];
                l=j;
            }
        }

        t=a[i];
        a[i]=a[l];
        a[l]=t;
    }

    cout<<"\n Selection Sorted list :\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
