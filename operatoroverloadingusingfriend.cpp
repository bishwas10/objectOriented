#include <iostream>
using namespace std;
class test2;
class test1
{
    int a;
     public:
     void geta ()
     {
         cout << "Enter the value of A" << endl;
        cin >> a;
     }
     friend void operator > ( test1 t1,  test2 t2);
};   
class test2
{
    int b;
     public:
     void getb ()
     {
         cout << "Enter the value of B" << endl;
        cin >> b;
     }
     friend void  operator > ( test1 t1,  test2 t2);
};
void operator > (test1 t1, test2 t2)
{
    t1.a > t2.b ? cout << " A is greatest" : cout << " B is greatest" << endl;

} 
int main ()
{
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    t1>t2;
    return 0;

} 