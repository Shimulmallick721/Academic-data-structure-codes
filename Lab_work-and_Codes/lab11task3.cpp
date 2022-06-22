#include <iostream>
#include <conio.h>
using namespace std;
void heapify(int a[], int x, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < x && a[l] > a[largest])
        largest = l;

    if (r < x && a[r] > a[largest])
        largest = r;

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, x, largest);
    }
}
void heapify2(int a[], int x, int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < x && a[l] < a[smallest])
        smallest = l;
    if (r < x && a[r] < a[smallest])
        smallest = r;
    if (smallest != i) {
        swap(a[i], a[smallest]);
        heapify2(a, x, smallest);
    }
}

void printArray(int a[], int x)
{
    for (int i = 0; i < x; ++i)
        cout << a[i] << " ";
    cout << "\n";
}
int main()
{
    int n, i, x,ch;
    int a[]={45, 36, 54, 27, 63, 72, 61,18};
    x = sizeof(a) / sizeof(a[0]);
    cout<<"1 :For Insert a new element";

    cout<<"\nEnter choice : ";
    cin>>ch;
    switch(ch){
        case 1:cout<<"\nenter no of elements to add :";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        cout<<"\nenter element : ";
        cin>>a[i];
    }
    case 2:

    default :
        cout<<"Enter valid number";
    }
    getch();

}
