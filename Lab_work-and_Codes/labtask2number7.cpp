#include <iostream>
using namespace std;

int main()
{
    int a[3][4], transpose[4][3], i, j;

    cout << "\nEnter elements of matrix: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 3; ++j)
        {
            cout << " " << transpose[i][j];
            if (j == 3 - 1)
                cout << endl << endl;
        }
    }

    return 0;


}
