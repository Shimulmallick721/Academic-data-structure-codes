#include<iostream>
using namespace std;
 class Sample {
   public:
    float age;
    void displayAge() {
        cout << "Age = " << age << endl;
    }
};
int main() {
    Sample obj1;
    cout << "Enter your age: ";
    cin >> obj1.age;
    obj1.displayAge();

    return 0;
}
