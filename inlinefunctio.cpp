#include <iostream>
using namespace std;
class test 
{
    public :
    void fun1()
    {
        cout << "In Line" << endl;
    }
    void fun2();
};
void test :: fun2()
{
    cout << "This in Non - Inline" << endl;
}
int main ()
{
    test t;
    t.fun1();
    t.fun2();
    return 0;
}