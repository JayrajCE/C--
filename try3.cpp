#include <iostream>
using namespace std;

class J;
class A
{
    int data;

public:
    void getdata(int a)
    {
        data = a;
        cout << data << "\n";
    }
    friend int sum(J, A);
};
class J
{
    int data;

public:
    void getdata(int j)
    {
        data = j;
        cout << data << "\n";
    }
    friend int sum(J, A);
};

int sum(J jj, A aa)
{
    int sum;
    sum = jj.data + aa.data;
    return sum;
}

int main()
{
    int ans;
    J j;
    A a;
    j.getdata(5);
    a.getdata(4);
    ans = sum(j, a);
    cout << "Sum : " << ans;
    return 0;
}