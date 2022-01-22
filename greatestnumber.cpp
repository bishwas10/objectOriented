#include<iostream>
using namespace std;
class greatest 
{
    int a;
    int b;
    public:
    void displaydata ();
    int big();
    void setdata (int x, int y)
    {
        a = x;
        b = y;
    }
    
};
void greatest :: displaydata()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int greatest :: big ()
{
    if ( a > b)
    return a;
    else
    return b;
}
int main ()
{
    greatest g;
    g.setdata (10,5);
    g.displaydata ();
    int max = g.big ();
    cout << max << " is big " << endl;
    return 0;
}