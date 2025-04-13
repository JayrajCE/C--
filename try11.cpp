#include <iostream>
using namespace std;
int main()
{
    int n , m , x;
    cout<<"ENTER : ";
    cin >> m ;
    cout<<"ENTER : ";
    cin >> n;
    if(n>m)
    {
        x = n;
    }
    else
    {
        x = m;
    }
    for(int i = 1 ; i<= x ; i++)
    {
        if((x*i)%n == 0 && (x*i)%m == 0)
        {
            cout<< "LCM of "<<m<<" and "<<n<<" is "<<x*i<<endl;
            break;
        }
    }
}