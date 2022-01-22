#include<iostream>
using namespace std;
class test
{
    int a ;
    int b;
    public:
    void show ( int a , int b)
    {
        this -> a = a;
        this -> b = b;
    }
    void display();

};
void test :: display ()
{
    cout << "a = " << a <<" "<< "b = " << b << endl;
}
int main ()
{
    test t;
    t.show (10,5);
    t.display ();
    return 0;
}