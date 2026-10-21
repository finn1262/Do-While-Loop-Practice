#include <iostream>

using namespace std;

int main()
{
    cout << "Do While" << endl;

    int n1,n2;
    char ans;

    do{

        cout << "Enter 1st Number: ";
        cin >> n1;
        cout << "Enter 2nd Number: ";
        cin >> n2;

        cout << n1 << " " << n2 << endl;

        cout << "Do you want to continue (Y/N): ";
        cin >> ans;
    }

    while (ans == 'y' || ans == 'Y');

    return 0;
}
