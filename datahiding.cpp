#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setlength ( int l)
    { 
        if (l>0)
        length = l;
        else
        cout << "Length cannot be negative" << endl;
    }
    void setbreadth (int b)
    {
        if (b >0)
        breadth = b;
        else
        cout << "Breadth Cannot be negative" << endl;

    }
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
    rectangle r;
    r.setlength (10);
    r.setbreadth (5);
    cout << "The area of the rectangle is " << r.area() << endl;
    cout << "The perimeter of the rectangle is " << r.perimeter()<< endl;
    
    return 0;
}