#include <iostream>
using namespace std;

struct studentrecord

{
    int ID;
    int credit;
    float cgpa;
} s[10];

int main()
{
    cout << "Enter information of 10 students: " << endl;

    for(int i = 0; i < 10; ++i)
    {
        cout << "For ID number";
        cin>>s[i].ID;
        cout<<"credits completed"<<" ";
        cin>>s[i].credit;

        cout << "Enter cgpa: "<<" ";
        cin >> s[i].cgpa;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for(int i = 0; i < 10; ++i)

    {
        cout << "\nRoll number: " << s[i].ID<< endl;
        cout<<"\ncredits completed: " <<s[i].credit<<endl;
        cout << "\nMarks: " << s[i].cgpa << endl;
    }

    /*
        if (s[i].marks==3.75)
        {
            cout << "\nRoll number: " << s[i].ID<< endl;
        cout<<"\ncredits completed: " <<s[i].credit<<endl;
        cout << "\nMarks: " << s[i].cgpa << endl;
        }
    //  cout<<s[i].roll<<s[i].name<<s[i].marks;
    //else
    //  cout<<"";
    // cout<<studentrecord[i];
    while ( s[i].marks>=3.75)||(
    {
        cout << "\nRoll number: " << s[i].ID<< endl;
        cout<<"\ncredits completed: " <<s[i].credit<<endl;
        cout << "\nMarks: " << s[i].cgpa << endl;
    }
*/

    return 0;
}
