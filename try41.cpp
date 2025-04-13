#include <iostream>
using namespace std;

class shape
{
    
    int R;
    public :
        void f()
        {
            R=10;
            cout << R;
        }
        void v()
        {
            return R;
        }
};

class cricle : private shape
{
    float area;
    public:
    void g()
    {
        f();
    }
};

int main()
{
    cricle c;
    shape s;
    c.Ra=10;
 cout<<sizeof(c);
}