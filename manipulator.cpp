#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout << setprecision (3) << 22/7.0 << endl;
    cout << setbase (8) << 65 << endl;
    cout << setbase (2) << 010 << endl;
    cout << setw(10) << setiosflags (ios :: left) << "Bishwas" << endl;
    cout << setw(10) << setiosflags (ios :: left) << "Ram" << endl;
    cout << setiosflags (ios ::scientific) <<234.1245 << endl;
    


    return 0;
}