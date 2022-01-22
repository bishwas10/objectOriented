#include <iostream>
using namespace std;
class student
{
    private:
    int id;
    char name[20];
    float fee;
    public:
    void get();
};
void student :: get ()
{
    cout << "Enter the Id number of the student" << endl;
    cin >> id;
    cout << "Enter the name of the student" << endl;
    cin >> name;
    cout << "Enter the fee of the student" << endl;
    cin >> fee;
}
int main ()
{
    student std;
    std.get ();
    return 0;
}