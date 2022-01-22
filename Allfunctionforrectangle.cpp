#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle ();
    rectangle (int l, int b);
    rectangle (rectangle &r);
    void setlength (int l);
    void setbreadth (int b);
    int getlength ();
    int getbreadth ();
    int area ();
    int perimeter ();
    bool issquare ();
    ~ rectangle ();
};
rectangle :: rectangle ()
{
    length = 0;
    breadth = 0;
}
rectangle :: rectangle (int l, int b)
{
    length = l;
    breadth = b;
}

void rectangle :: setlength (int l)
{
    length = l;
    
}
 rectangle :: rectangle (rectangle &r)
 {
     length = r.length;
     breadth = r.breadth;
 }
void rectangle :: setbreadth (int b)
{
    breadth = b;
}
int rectangle :: area ()
{
    return length *breadth;
}
int rectangle :: perimeter ()
{
    return 2* (length +breadth);
}
bool rectangle :: issquare ()
{
    return length == breadth;
}
rectangle :: ~rectangle ()
{
    cout << "Rectangle is Destroyed" << endl;

}
int main ()
{
    rectangle r;
    r.setlength (10);
    r.setbreadth (10);
    if (r.issquare ())
    {
    cout << "It is a square" << endl;
    }
    cout << "The area of the rectangle is " << r.area () << endl;
    cout << "The perimeter of the rectangle is "<< r.perimeter () << endl;
    return 0;
}
