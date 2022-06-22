#include <iostream>

using namespace std;



void heapify(int a[], int b, int c)

{

    int largest = c;

    int le = 2*c + 1;

    int ri = 2*c + 2;


    if (le < b && a[le] > a[largest])

        largest = le;


    if (ri < b && a[ri] > a[largest])

        largest = ri;


    if (largest != c)

    {

        swap(a[c], a[largest]);




        heapify(a, b, largest);

    }

}



void heapSort(int a[], int b)

{


    for (int c = b / 2 - 1; c >= 0; c--)

        heapify(a, b, c);


    for (int c=b-1; c>0; c--)

    {


        swap(a[0], a[c]);



        heapify(a, c, 0);

    }

}

void printArray(int a[], int b)

{

    for (int c=0; c<b; ++c)

        cout << a[c] << " ";

    cout << "\n";

}



int main()

{

    int a[5];
    cout<<"enter elements";
    for(int c=0;c<5;c++)
    {
        cin>>a[c];
    }

    int b = sizeof(a)/sizeof(a[0]);

    heapSort(a,b);

    cout <<"\n Sorted array is:";

    printArray(a,b);

    return 0;
}
