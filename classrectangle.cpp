#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area ()
    {
        return length*breadth;
    }
    int perimeter ()
    {
        return 2*(length+breadth);
    }
};
int main ()
{
    rectangle r1,r2;
    r1.length =10;
    r1.breadth= 5;
    cout << "The area of the rectangle is " << r1.area() << endl;
    cout << "The perimeter of the rectangle is " << r1.perimeter()<< endl;
    r2.length = 6;
    r2.breadth = 4;
    cout << "The area of the rectangle is" << r2.area () << endl;
    cout << "The Perimeter of the rectangle is " << r2.perimeter () << endl;
    return 0;
}