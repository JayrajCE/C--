#include <iostream>
using namespace std;
class obj
{
    static int i;
    static int j;
};
int main ()
{
    obj a;
    cout<<sizeof(a);
}
