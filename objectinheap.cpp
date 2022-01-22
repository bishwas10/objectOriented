//Wap to create an object in a Heap
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
    rectangle *p = new rectangle ();
    p -> length =10;
    p -> breadth= 5;
    cout << "The area of the rectangle is " << p -> area() << endl;
    cout << "The perimeter of the rectangle is " <<p ->perimeter()<< endl;
    p -> length = 6;
    p-> breadth = 4;
    cout << "The area of the rectangle is " << p->area () << endl;
    cout << "The Perimeter of the rectangle is " << p-> perimeter () << endl;
    return 0;
}