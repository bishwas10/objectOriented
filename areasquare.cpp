#include <iostream>
using namespace std;
class square
{
    int length;
    public:
    int area (int l);

};
int square :: area (int l)
{
    return l*l;
}
int main ()
{
    square s;
    cout << "The area of the square is" << s.area(5) << endl;
    return 0;
}