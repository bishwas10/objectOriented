#include <iostream>
using namespace std;
class student
{
    private:
    int id;
    int roll;
    char name[20];
    public:
    void setdata();
    void getdata();

};
void student :: setdata ()
{
    cout << "Enter the Id of the student" << endl;
    cin >> id;
    cout << "Enter the Roll Number of the student" << endl;
    cin >> roll;
    cout << "Enter the name of the student" << endl;
    cin >> name;
}
void student :: getdata ()
{
    cout << "Id = " << id << endl;
    cout << "Roll Number = " << roll << endl;
    cout << "Name = " << name << endl;
}
int main ()
{
    student std;
    std.setdata ();
    std.getdata ();
    return 0;
}