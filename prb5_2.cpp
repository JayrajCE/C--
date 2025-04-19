#include <iostream>
using namespace std;

class Complex
{
    public:
    int real_part, imgnary_part;
    void input()
    {
        cout<<"Enter num :";
        cin>>real_part>>imgnary_part;

    }
    void operator+(Complex &b)
    {
        Complex ans;
        ans.real_part = real_part + b.real_part;
        ans.imgnary_part= imgnary_part+b.imgnary_part;
        cout<<ans.real_part<<"+"<<ans.imgnary_part<<"i";
    }

};
int main()
{
    Complex a,b ,x;
    a.input();
    b.input();
    a+b;
    return 0;

}

