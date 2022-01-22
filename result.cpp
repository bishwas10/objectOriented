#include <iostream>
using namespace  std;
class test
{
    int roll;
    float per;
    public :
    void setdata (int, float);
    void getdata ();

};
void test :: setdata (int x, float y)
{
    roll = x;
    per = y;
}
int main ()
{
    test t;
    t.setdata (10,80.3);
    return 0; 
}