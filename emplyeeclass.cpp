#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    int empid;
    float empsal;
    char empname[20];
    public:
    void setdata ( int id, float sal, char name[20]);
    void displaydata();

};
void employee :: setdata ( int id, float sal, char name[20] )
{

empid = id;
empsal = sal;
strcpy (empname,name);
}
void employee :: displaydata ()
{
cout << "Emplyee Id = " << empid << endl;
cout << "Employee salary =" << empsal << endl;
cout << "Employee Name="  << empname << endl;
}
int main ()
{
    employee emp;
    emp.setdata( 4,454000.363,"Bishwas");
    emp.displaydata ();
    return 0;
}