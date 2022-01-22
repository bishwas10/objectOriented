#include <iostream>
using namespace std;
class sum
{
    int x;
    int y;
    public :
    int add (int a , int b)
    {
        x = a;
        y = b;
        return x+y;
   }
   


};
int main ()
{
    sum s;
    
    cout << "The sum is " << s.add(10,5);
    return 0;
}


