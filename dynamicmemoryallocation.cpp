#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int n;

    cout << "Enter the size of an Array" << endl;
    cin >> n;
    int *p = new int [n];
    int i;
    for (i = 0;i <n;i++)
    {
    cin >> *(p+i);
    }
    cout << "Elements are" <<  endl;
    for ( i = 0; i <n;i++)
    {
        cout << *(p+i) << endl;
    }
        delete p;
        return 0;
}