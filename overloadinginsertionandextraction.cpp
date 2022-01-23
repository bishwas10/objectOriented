#include <iostream>
using namespace std;
class student
{
    int id;
    char name [20];
    public:
    friend void operator >> (istream &in, student &s)
    {
        cout << "Enter the Id of the student" << endl;
        in >> s.id;
        cout << "Enter the name of the student" << endl;
        in >> s.name;

    }
    friend void operator << (ostream &out, student &s)
    {
        out << "Enter the Id of the student" << endl;
        cin >> s.id;
        out << "Enter the name of the student" << endl;
        cin >> s.name;

    }
    int main ()
    {
        student s;
        cin >> s;
        cout << s;
        return 0;
    }

};