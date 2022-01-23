#include <iostream>
using namespace std;
class test
{
    int num;
    public :
    void get ()
    {
        cin >> num;
    }
    void operator ==(test t2)
    {
        if (num ==t2.num)
        {
            cout << "Objects are Equal" << endl;
        }
        else
        cout << "Objects are not Equal" << endl;
    }

};
int main()
{
    test t1, t2;
    cout << "Enter t1 object" << endl;
    t1.get();
    cout << "Enter t2 object" << endl;
    t2.get ();
    t1==t2;
    return 0;
}