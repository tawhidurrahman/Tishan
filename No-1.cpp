#include <iostream>
using namespace std;
class aiub
{
    int a,b,c;
    public:
    aiub ();
    aiub (int x)
    {
        a=x;
        cout << a << endl;
    }
    aiub (int x,int y)
    {
        a=x;
        b=y;
        cout << a <<" "<< b << endl;
    }
    aiub (int x,int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout << a <<" "<< b << " "<< c <<endl;
    }
};
int main ()
{
    aiub (5);
    aiub (6,7);
    aiub (8,9,10);

    return 0;
}
