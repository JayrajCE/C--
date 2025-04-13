#include <iostream>
using namespace std;

class c1
{
    public :
    int a =5 ;
};
class c2 : public c1
{
    
};
class c3 : public c2
{
    
};
int main()
{
    c3 c;
    cout<<c.a;
    return 0;   
}