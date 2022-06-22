//1.Find the summation of the boundary elements for the given array. Take input from user keyboard.
#include<iostream>
using namespace std;

int main()
{
    int i,j,m, n, sum = 0;

    m=4;
    n=5;
    int arr[m][n];
    cout << "\nInput the matrix elements\n";
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    //cout << "Boundary Matrix"<<endl;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i==0||i==m-1||j==0||j==n-1)
            {
                //cout << arr[i][j] << "  ";
                sum = sum + arr[i][j];
            }
            else
                cout <<"    ";
        }
        cout << endl;
    }
    cout << " Sum of boundary is " << sum << endl;
    return 0;
}
